//Given an array of numbers and an index i, return the index of the nearest larger number of the number at index i, where distance is measured in array indices.

//For example, given [4, 1, 3, 5, 6] and index 0, you should return 3

#include <iostream>

using namespace std;

int findLargerNeighbour(int index, int arr[], int length) {
    int leftIndex= INT16_MAX;
    int rightIndex = INT16_MAX;
    int currentNumber = arr[index];
    for (int i = index+1; i < length; ++i) {
        int element = arr[i];
        if (element > currentNumber) {
            rightIndex = i;
            break;
        }
    }

    for (int j = index-1; j >= 0; --j) {
        int element = arr[j];
        if (element > currentNumber) {
            leftIndex = j;
            break;
        }
    }

    int rightDistance  = abs(rightIndex - index);
    int leftDistance  = abs(leftIndex - index);

    if (rightDistance < leftDistance) {
        return rightIndex;
    }

    if (rightDistance > leftDistance) {
        return leftIndex;
    }

    return index;
}


int main() {
    int list[] = {9, 4, 4, 9, 1, 1, 3, 5, 6};

    int neighbour = findLargerNeighbour(1, list, 9);

    cout << neighbour << endl; 

    return 0;
}