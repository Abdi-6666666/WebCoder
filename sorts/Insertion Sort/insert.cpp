#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    int b;
    for (int i = 0; i < n; ++i) {
        cin >> b;
        arr.push_back(b);
    }
    insertionSort(arr);
    for (int i : arr) {
        cout << arr[i - 1] << " ";
    }
    cout << endl;
    cout << "************************************\n"
         << "*              Done                *\n"
         << "************************************\n";

    return 0;
}