#include <bits/stdc++.h>
using namespace std;

int main() {
    long a, b, c; cin >> a >> b >> c;
    long long res = pow(a, b);
    cout << res % c << endl;
    return 0;
}