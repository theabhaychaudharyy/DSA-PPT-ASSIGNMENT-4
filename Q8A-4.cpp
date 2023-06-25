#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums, int n) {
    vector<int> result(nums.size());

    for (int i = 0; i < n; i++) {
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[n + i];
    }

    return result;
}

int main() {
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> rearranged = rearrangeArray(nums, n);

    cout << "Rearranged array: ";
    for (int num : rearranged)
        cout << num << " ";
    cout << endl;

    return 0;
}
