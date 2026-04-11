#include <iostream>
//bouble
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    bool f = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                f = 1;
            }
        }
        if (!f)
            break;
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    cout << "************************************\n"
         << "*              Done                *\n"
         << "************************************\n";

    return 0;
}