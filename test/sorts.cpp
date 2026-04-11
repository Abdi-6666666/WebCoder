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
            j--;
        }
        arr[j + 1] = key;
    }
    return arr;
}

vector<int> selectionsort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int max_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[max_idx]) {
                max_idx = j;
            }
        }
        swap(arr[i], arr[max_idx]);
    }
    return arr;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        arr.push_back(num); 
    }
    cout << "Sorted array (Insertion Sort): ";
    vector<int> sorted_arr = insertionsort(arr);
    for (int num : sorted_arr) {
        cout << num << " ";
    }
    cout << "\nSorted array (Selection Sort): ";
    sorted_arr = selectionsort(arr);
    for (int num : sorted_arr) {
        cout << num << " ";
    }
    return 0;
}