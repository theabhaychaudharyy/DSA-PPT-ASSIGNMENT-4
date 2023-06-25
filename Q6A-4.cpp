#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);

    int left = 0;
    int right = n - 1;

    for (int i = n - 1; i >= 0; i--) {
        int square;
        if (abs(nums[left]) > abs(nums[right])) {
            square = nums[left];
            left++;
        } else {
            square = nums[right];
            right--;
        }
        result[i] = square * square;
    }

    return result;
}

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> squaredSorted = sortedSquares(nums);

    cout << "Sorted array of squares: ";
    for (int num : squaredSorted)
        cout << num << " ";
    cout << endl;

    return 0;
}
