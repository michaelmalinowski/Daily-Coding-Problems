#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int *arr, int len) {
    while (1) {
        bool swapped = false;
        for (int x = 0; x < len - 1; ++x) {
            if (arr[x] > arr[x + 1]) {
                swap(arr[x], arr[x + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int input_arr[]= {5, 9, 3, 1, 8, 4, 2, 6, 7};

    for (int &num : input_arr) {
        cout << num << " ";
    }

    cout << endl;
    bubbleSort(input_arr, 9);

    for (int &num : input_arr) {
        cout << num << " ";
    }

    return 1;
}