/*Cho xâu `S` và kí tự `c`. Viết chương trình tính số lần xuất hiện của kí tự `c` (không phân biệt chữ hoa chữ thường) trong xâu `S`*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    char c;
    cin >> c;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c || s[i] == c + 32 || s[i] == c - 32) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}