#include <iostream>
#include <vector>

using namespace std;

vector<int> partitionList(int pivot, int* arr, int len) {
    vector<int> partitionedList;
    int pivotOccurence;
    for (int x = 0; x < len; ++x) {
        int element = arr[x];
        if (element < pivot) {
            partitionedList.push_back(element);
            arr[x] = pivot;
        } else if (element == pivot) {
            ++pivotOccurence;
        }
    }
    while (pivotOccurence) {
        partitionedList.push_back(pivot);
        --pivotOccurence;
    }
    
    for (int i = 0; i < len; ++i) {
        int element = arr[i];
        if (element > pivot) {
            partitionedList.push_back(element);
        }
    }
    
    return partitionedList;
}

int main()
{
    int arr[] = {9, 12, 3, 5, 14, 10, 10,7 ,10, 12,2,32131,2312,1,1,1,1,2,3,4};
    
    vector<int> list = partitionList(10, arr, 20);
    
    for (int &element : list){
        std::cout << element << " ";
    }
    
    return 0;
}