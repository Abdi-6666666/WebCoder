#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        arr.push_back(b);
    }
    int m;
    cin >> m;
    int ans;
    for (int i : arr) {
        if(arr[i - 1] == m)
            ans = i - 1;
    }
    cout << ans << endl;
    return 0;
}