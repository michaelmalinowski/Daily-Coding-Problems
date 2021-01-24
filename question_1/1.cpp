// This problem was recently asked by Google.

// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.


//Good way to learn about sets and unordered_sets(faster) and how to use them
//#include <set>
//std::set my_set; creates the set
//set.insert adds a new item to the set
//set.find find the pos of the item in the set
//unordered_set has the same methods

#include <iostream>
#include <set>
#include <unordered_set>

bool arraySumCheck(int* arr, int arr_len, int sum) {
    std::set<int> sum_set;
    for (int i = 0; i < arr_len; ++i) {

        if (sum_set.end() != sum_set.find(arr[i])){
            std::cout << "Two numbers in this array add up to the sum." << std::endl;
            return 1;
        }

        int sub_num = sum - arr[i];
        sum_set.insert(sub_num);
    }
    std::cout << "No two numbers in this array add up to the sum." << std::endl;
    return 0;
}


int main() {
    std::unordered_set<int> my_set;
    int nums[] = {1,2,3,4,5,6,7};
    arraySumCheck(nums, 7, 1);
    return 0;
}