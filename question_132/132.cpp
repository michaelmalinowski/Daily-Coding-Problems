// Design and implement a HitCounter class that keeps track of requests (or hits). It should support the following operations:

// record(timestamp): records a hit that happened at timestamp
// total(): returns the total number of hits recorded
// range(lower, upper): returns the number of hits that occurred between timestamps lower and upper (inclusive)

#include <iostream>
#include <vector>

using namespace std;

class HitCounter {
    private:

    vector<int> hitList;
    int total = 0;

    public:
    
    void record(int timestamp) {
        hitList.push_back(timestamp);
        ++total;
    }

    int total() {
        return this->total;
    }

    int range(int lower, int upper) {
        int hitCount = 0;
        for (int &timestamp : this->hitList) {
            if (timestamp > lower && timestamp < upper) {
                ++hitCount;
            }
        }
        return hitCount;
    }
};

//Linked list would be more space efficient
class HitCounterO {
    private:
    
    vector<int> hitList;
    int total = 0;
    int latestTimestamp = 0;

    public:
    
    void record(int timestamp) {
        hitList.push_back(timestamp);
        if (this->latestTimestamp < timestamp) {
            this->latestTimestamp = timestamp;
        }
        ++total;
    }

    int total() {
        return this->total;
    }

    int range(int lower, int upper) {
        int hitCount = 0;
        int index = 0;
        for (int &timestamp : this->hitList) {
            if (timestamp > lower && timestamp < upper) {
                ++hitCount;
            }
            if (this->latestTimestamp - timestamp > 1000) {
                this->hitList.erase(this->hitList.begin() + index);
            }
            ++index;
        }
        return hitCount;
    }
};
