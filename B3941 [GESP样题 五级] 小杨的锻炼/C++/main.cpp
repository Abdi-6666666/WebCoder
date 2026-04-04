#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[12];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = arr[0];
    for (int i = 0; i < n - 1; ++i) {
        result = lcm(result, arr[i + 1]);
    }
    cout << result << endl;
    return 0;
}