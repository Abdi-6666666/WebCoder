#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> boubleSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

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
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        swap(arr[i], arr[max_idx]);
    }
    return arr;
}

vector<int> QuickSort(vector<int> arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] > pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
    return arr;
}

vector<int> quicksort(vector<int> arr) {
    return QuickSort(arr, 0, arr.size() - 1);
}

bool g_is_running = true;

int main() {
    while (g_is_running) {
        int n;
        cout << "Enter the number of elements: ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "Choose sorting algorithm:\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Insertion Sort\n";
        cout << "3. Selection Sort\n";
        cout << "4. Quick Sort\n";
        int choice;
        cin >> choice;

        vector<int> sorted_arr;
        switch (choice) {
            case 1:
                sorted_arr = boubleSort(arr);
                break;
            case 2:
                sorted_arr = insertionsort(arr);
                break;
            case 3:
                sorted_arr = selectionsort(arr);
                break;
            case 4:
                sorted_arr = quicksort(arr);
                break;
            default:
                cout << "Invalid choice!" << endl;
                continue;
        }

        cout << "Sorted array: ";
        for (int num : sorted_arr) {
            cout << num << " ";
        }
        cout << endl;

        char cont;
        cout << "Do you want to sort another array? (y/n): ";
        cin >> cont;
        if (cont != 'y' && cont != 'Y') {
            g_is_running = false;
        }
    }
    cout << "Bye :)\nsee you later!" << endl;
    system("pause");
    return 0;
}