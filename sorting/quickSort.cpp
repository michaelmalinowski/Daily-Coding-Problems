#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void partition(int arr[], int low, int high) {

    for (int x = 0; x < len; x++) {
        if (arr[pivot] < arr[start]) {
            swap(arr[pivot - 1], arr[pivot]);
            swap(arr[pivot], arr[start]);
            --pivot;
            continue;
        }
        ++start;
    }
}


void quicksort(int arr[], int len) {
    
}

int main() {
    int input_arr[]= {5, 9, 3, 2, 8, 1, 4, 6, 7};

    for (int &num : input_arr) {
        cout << num << " ";
    }  
    cout << endl;

    quicksort(input_arr, 9);

    for (int &num : input_arr) {
        cout << num << " ";
    }

    return 0;
}