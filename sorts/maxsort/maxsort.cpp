#include <iostream>
#include <vector>
#include <algorithm>
#include <unistd.h>
#include <cstdlib>

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

vector<int> merge_sort(vector<int> arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }
    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());
    left = merge_sort(left);
    right = merge_sort(right);
    vector<int> result;
    int i = 0, j = 0;
    while (i < left.size() && j < right.size())
    {
        if (left[i] > right[j])
        {
            result.push_back(left[i]);
            i++;
        }
        else
        {
            result.push_back(right[j]);
            j++;
        }
    }
    while (i < left.size())
    {
        result.push_back(left[i]);
        i++;
    }
    while (j < right.size())
    {
        result.push_back(right[j]);
        j++;
    }
    return result;
}

bool g_is_running = true;

int main()
{
    while (g_is_running)
    {
        system("clear");
        std::cout << "=== Max Sort (linux) ==="
             << endl;
        std::cout << "1. Bubble Sort"
             << endl;
        std::cout << "2. Insertion Sort"
             << endl;
        std::cout << "3. Selection Sort"
             << endl;
        std::cout << "4. Quick Sort"
             << endl;
        std::cout << "5. sort"
             << endl;
        std::cout << "6. Merge Sort"
             << endl;
        std::cout << "z. Exit"
             << endl;
        std::cout << "=========================="
             << endl;
        std::cout << "Choose a sorting algorithm (1-6): ";
        /*
        *****************************************
        *****************************************
        *****************************************
        *****************************************
        *****************************************
        *****************************************
        *****************************************
        *****************************************
        */
        char choice;
        std::cin >> choice;
        system("clear");
        switch (choice)
        {
        case '1':
        {
            system("clear");
            std::cout << "=== Bubble Sort ==="
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
            std::cout << "Sorted array: ";
            for (int num : sortedArr)
            {
                std::cout << num << " ";
            }
            std::cout << endl;
            std::cout << "Press Enter to continue...";
            std::cin.get();
            std::cin.get();
            break;
        }
        case '2':
        {
            system("clear");
            std::cout << "=== Insertion Sort ==="
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
            std::cout << "Sorted array: ";
            for (int num : sortedArr)
            {
                std::cout << num << " ";
            }
            std::cout << endl;
            std::cout << "Press Enter to continue...";
            std::cin.get();
            std::cin.get();
            break;
        }
        case '3':
        {
            system("clear");
            std::cout << "=== Selection Sort ==="
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
            std::cout << "Sorted array: ";
            for (int num : sortedArr)
            {
                std::cout << num << " ";
            }
            std::cout << endl;
            std::cout << "Press Enter to continue...";
            std::cin.get();
            std::cin.get();
            break;
        }
        case '4':
        {
            system("clear");
            std::cout << "=== Quick Sort ==="
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
            std::cout << "Sorted array: ";
            for (int num : sortedArr)
            {
                std::cout << num << " ";
            }
            std::cout << endl;
            std::cout << "Press Enter to continue...";
            std::cin.get();
            std::cin.get();
            break;
        }
        case '5':
        {
            system("clear");
            std::cout << "=== Sort ==="
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
            std::cout << "Sorted array: ";
            for (int num : arr)
            {
                std::cout << num << " ";
            }
            std::cout << endl;
            std::cout << "Press Enter to continue...";
            std::cin.get();
            std::cin.get();
            break;
        }
        case '6':
        {
            system("clear");
            std::cout << "=== Merge Sort ==="
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
            vector<int> sortedArr = merge_sort(arr);
            std::cout << "Sorted array: ";
            for (int num : sortedArr)
            {
                std::cout << num << " ";
            }
            std::cout << endl;
            std::cout << "Press Enter to continue...";
            std::cin.get();
            std::cin.get();
            break;
        }
        case 'z':
            std::cout << "Exiting..." << endl;
            g_is_running = false;
            break;
        default:
            std::cout << "Invalid choice!" << endl;
            std::cout << "Press Enter to continue...";
            std::cin.get();
            std::cin.get();
            break;
        }
    }
    std::cout << "Bye :)\nsee you later!" << endl;
    std::cout << "Press Enter to continue...";
    std::cin.get();
    std::cin.get();
    return 0;
}