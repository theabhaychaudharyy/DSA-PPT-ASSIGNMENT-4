#include <iostream>
#include <vector>
using namespace std;

vector<int> find_common_elements(const vector<int>& arr1, const vector<int>& arr2, const vector<int>& arr3) {
    int ptr1 = 0, ptr2 = 0, ptr3 = 0;
    vector<int> result;

    while (ptr1 < arr1.size() && ptr2 < arr2.size() && ptr3 < arr3.size()) {
        if (arr1[ptr1] == arr2[ptr2] && arr2[ptr2] == arr3[ptr3]) {
            result.push_back(arr1[ptr1]);
            ptr1++;
            ptr2++;
            ptr3++;
        } else {
            int minimum = min(arr1[ptr1], min(arr2[ptr2], arr3[ptr3]));
            if (arr1[ptr1] == minimum)
                ptr1++;
            if (arr2[ptr2] == minimum)
                ptr2++;
            if (arr3[ptr3] == minimum)
                ptr3++;
        }
    }

    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 5, 7, 9};
    vector<int> arr3 = {1, 3, 4, 5, 8};

    vector<int> result = find_common_elements(arr1, arr2, arr3);

    cout << "Common elements: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}
