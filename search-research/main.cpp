#include "search.h"
#include "research.h"

int main() {
    cout << "=== search & research ===" << endl;
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    int target;
    cin >> target;
    cout << "choose: \n1. search" << endl;
    cout << "2. research" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    if (choice == 1) {
        vector<int> result = search(target, arr);
        if (result[0] != -1) {
            cout << "Element found at position: " << result[0] << endl;
        } else {
            cout << "Element not found." << endl;
        }
    } else if (choice == 2) {
        vector<int> result = research(target, arr);
        if (result[0] != -1) {
            cout << "Element found at position: " << result[0] << endl;
        } else {
            cout << "Element not found." << endl;
        }
    } else {
        cout << "Invalid choice." << endl;
    }
    cout << "=== End of search & research ===" << endl;
    system("read -n 1 -s -r -p 'Press any key to continue...'");
    return 0;
}