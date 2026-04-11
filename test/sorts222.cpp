#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> insertionsort(vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
    return arr;
}

vector<int>selectionsort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
    return arr;
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sorted_arr = insertionsort(arr);
    cout << "Sorted array (Insertion Sort): ";
    for (int num : sorted_arr) {
        cout << num << " ";
    }
    cout << endl;

    sorted_arr = selectionsort(arr);
    cout << "Sorted array (Selection Sort): ";
    for (int num : sorted_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}