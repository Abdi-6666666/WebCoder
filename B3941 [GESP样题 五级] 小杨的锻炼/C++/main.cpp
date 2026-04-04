#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[12];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int n = 0;
    for (int i = 0; i < n - 1; ++i) {
        n = __lcm__(arr[i], arr[i + 1]);
    }
    cout << n << endl;
    return 0;
}