#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string str;
    for (int i = 0; i < s.size(); ) {
        int count = 0;
        for (int j = i; j < s.size(); j++) {
            if (s[i] == s[j]) {
                count++;
            } else {
                break;
            }
        }
        str += s[i];
        if (count > 1) {
            str += to_string(count);
        }
        i += count;
    }
    cout << str << endl;
    return 0;
}