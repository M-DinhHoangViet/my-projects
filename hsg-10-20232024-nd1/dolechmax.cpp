/*Cho dãy số nguyên a1, a2, …, an.  Gọi Dij = aj – ai (với 1 ≤ i ≤ j ≤ n) là độ lệch giữa hai phần tử  a[i], a[j] của dãy số*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for (int &i : arr) cin >> i;
    int maxDiff = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = arr[j] - arr[i];
            if (diff > maxDiff) {
                maxDiff = diff;
            }
        }
    }
    cout << maxDiff << endl;
    return 0;
}