``` cpp
#include <iostream>
#include <vector>

using namespace std;

// 插入排序函数
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    // 从第二个元素开始，因为第一个元素默认是已排序的
    for (int i = 1; i < n; ++i) {
        // 选择当前元素作为要插入的元素
        int key = arr[i];
        // 初始化 j 为当前元素的前一个位置
        int j = i - 1;

        // 将 arr[0..i-1] 中大于 key 的元素向后移动一位
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // 将 key 插入到正确的位置
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr;  // 用于存储输入的整数
    int n;  // 输入的整数个数
    cin >> n;

    // 读取 n 个整数并存储在向量 arr 中
    int b;
    for (int i = 0; i < n; ++i) {
        cin >> b;
        arr.push_back(b);
    }

    // 调用插入排序函数对 arr 进行排序
    insertionSort(arr);

    // 输出排序后的数组
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // 打印完成信息
    cout << "************************************\n"
         << "*              Done                *\n"
         << "************************************\n";

    return 0;
}
```