## merge C++
``` cpp
vector<int> mergesort(vector<int> arr) {
    if (arr.size() <= 1) {
        return arr;
    }
    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());
    left = mergesort(left);
    right = mergesort(right);
    vector<int> merged;
    int i = 0, j = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] > right[j]) {
            merged.push_back(left[i]);
            i++;
        } else {
            merged.push_back(right[j]);
            j++;
        }
    }
    while (i < left.size()) {
        merged.push_back(left[i]);
        i++;
    }
    while (j < right.size()) {
        merged.push_back(right[j]);
        j++;
    }
    return merged;
}
```