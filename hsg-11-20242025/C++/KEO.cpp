#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int maxSum = 0, minSum = INT_MAX;
    for (int i = 0; i <= n - k; i+=k) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += a[j];
        }
        if (sum > maxSum) {
            maxSum = sum;
        }
        if (sum < minSum) {
            minSum = sum;
        }
    }

    cout << maxSum - minSum << endl;
    return 0;
}