#include <iostream>
using namespace std;

int arrangeCoins(int n) {
    int k = 0;
    long sum = 0;  // Use long to handle larger values of n

    while (sum <= n) {
        k++;
        sum += k;
    }

    return k - 1;
}

int main() {
    int n = 5;

    int completeRows = arrangeCoins(n);

    cout << "Number of complete rows: " << completeRows << endl;

    return 0;
}
