#include <iostream>
#include <vector>
#include <algorithm>
#include <unistd.h>

using namespace std;

vector<int> boubleSort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

vector<int> insertionsort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return arr;
}

vector<int> selectionsort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        int max_idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] > arr[max_idx])
            {
                max_idx = j;
            }
        }
        swap(arr[i], arr[max_idx]);
    }
    return arr;
}

vector<int> QuickSort(vector<int> arr, int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++)
        {
            if (arr[j] > pivot)
            {
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

vector<int> quicksort(vector<int> arr)
{
    return QuickSort(arr, 0, arr.size() - 1);
}

bool g_is_running = true;

int main()
{
    while (g_is_running)
    {
        system("clear");
        cout << "=== Max Sort (linux) ==="
             << endl;
        cout << "1. Bubble Sort"
             << endl;
        cout << "2. Insertion Sort"
             << endl;
        cout << "3. Selection Sort"
             << endl;
        cout << "4. Quick Sort"
             << endl;
        cout << "5. sort"
             << endl;
        cout << "6. Exit"
             << endl;
        cout << "=========================="
             << endl;
        cout << "Choose a sorting algorithm (1-5): ";
        int choice;
        cin >> choice;
        system("clear");
        switch (choice)
        {
        case 1:
        {
            system("clear");
            cout << "=== Bubble Sort ==="
                 << endl;
            vector<int> arr;
            int n;
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                int num;
                cin >> num;
                arr.push_back(num);
            }
            vector<int> sortedArr = boubleSort(arr);
            cout << "Sorted array: ";
            for (int num : sortedArr)
            {
                cout << num << " ";
            }
            cout << endl;
            system("read -n 1 -s -r -p 'Press any key to continue...'");
            break;
        }
        case 2:
        {
            system("clear");
            cout << "=== Insertion Sort ==="
                 << endl;
            vector<int> arr;
            int n;
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                int num;
                cin >> num;
                arr.push_back(num);
            }
            vector<int> sortedArr = insertionsort(arr);
            cout << "Sorted array: ";
            for (int num : sortedArr)
            {
                cout << num << " ";
            }
            cout << endl;
            system("read -n 1 -s -r -p 'Press any key to continue...'");
            break;
        }
        case 3:
        {
            system("clear");
            cout << "=== Selection Sort ==="
                 << endl;
            vector<int> arr;
            int n;
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                int num;
                cin >> num;
                arr.push_back(num);
            }
            vector<int> sortedArr = selectionsort(arr);
            cout << "Sorted array: ";
            for (int num : sortedArr)
            {
                cout << num << " ";
            }
            cout << endl;
            system("read -n 1 -s -r -p 'Press any key to continue...'");
            break;
        }
        case 4:
        {
            system("clear");
            cout << "=== Quick Sort ==="
                 << endl;
            vector<int> arr;
            int n;
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                int num;
                cin >> num;
                arr.push_back(num);
            }
            vector<int> sortedArr = quicksort(arr);
            cout << "Sorted array: ";
            for (int num : sortedArr)
            {
                cout << num << " ";
            }
            cout << endl;
            system("read -n 1 -s -r -p 'Press any key to continue...'");
            break;
        }
        case 5:
        {
            system("clear");
            cout << "=== Sort ==="
                 << endl;
            vector<int> arr;
            int n;
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                int num;
                cin >> num;
                arr.push_back(num);
            }
            sort(arr.begin(), arr.end(), greater<int>());
            cout << "Sorted array: ";
            for (int num : arr)
            {
                cout << num << " ";
            }
            cout << endl;
            system("read -n 1 -s -r -p 'Press any key to continue...'");
            break;
        }
        case 6:
            cout << "Exiting..." << endl;
            g_is_running = false;
            break;
        default:
            cout << "Invalid choice!" << endl;
            system("read -n 1 -s -r -p 'Press any key to continue...'");
            break;
        }
    }
    cout << "Bye :)\nsee you later!" << endl;
    system("read -n 1 -s -r -p 'Press any key to continue...'");
    return 0;
}