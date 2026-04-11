#include <iostream>
#include <vector>

using namespace std;
bool find(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int target;
    cin >> target;
    bool found = find(nums, target);
    if (found) {
        cout << "YES." << endl;
    } else {
        cout << "NO." << endl;
    }
    return 0;
}