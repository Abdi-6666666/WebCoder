#include <iostream>
#include <vector>

using namespace std;
void find(vector<int>& nums, vector<int> result, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            result.push_back(i);
        }
    }
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
    vector<int> result;
    find(nums, result, target);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}