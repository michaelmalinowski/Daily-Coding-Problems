// This problem was asked by Uber.

// Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

// For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

// Follow-up: what if you can't use division?

#include <iostream>


void arrayProduct(int* arr, int size) {
    int* right = new int[sizeof(int) * size ];
    int* left = new int[sizeof(int) * size ];

    int* prod = new int(sizeof(int) * size);

    left[0] = 1;
    right[size - 1] = 1;

    int i;
    for (i = 0; i < size - 1; ++i) {
        left[i + 1] = arr[i] * left[i];
    }

    for (i = size - 1; i >= 0; --i) {
        right[i - 1] = arr[i] * right[i];
    }

    for (i = 0; i < size; ++i) {
        int prod = right[i] * left[i];
        std::cout << prod << " ";
    }

    std::cout << std::endl;
}


int main() {
    int arr[] = { 10, 3, 5, 6, 2 };
    arrayProduct(arr, 5);
    return 0;
}