/*Viết chương trình nhập một xâu vào từ bàn phím và xác định xem xâu đó có phải là một xâu palindrome không.
Biết rằng xâu palindrome là xâu mà khi đảo ngược lại vẫn giống như ban đầu. Đối với bài toán này, ta sẽ bỏ qua khoảng trắng và không phân biệt chữ hoa chữ thường.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string main;
    getline(cin, main);
    string s = "";
    for (char c : main) {
        if (c == ' ') continue;
        else s += tolower(c);
    }
    bool isPalindrome = true;
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    cout << (isPalindrome ? "True" : "False") << endl;
    return 0;
}