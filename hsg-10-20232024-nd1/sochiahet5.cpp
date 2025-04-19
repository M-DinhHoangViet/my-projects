/*Viết một chương trình nhận đầu vào là chuỗi các số nhị phân 4 chữ số được người dùng nhập từ bàn phím, phân tách bởi dấu phẩy, kiểm tra xem chúng có chia hết cho 5 không. Sau đó in các số chia hết cho 5 thành dãy phân tách bởi dấu phẩy.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    while (getline(ss, temp, ',')) {
        int num = stoi(temp);
        if (num % 5 == 0) {
            cout << temp << ",";
        }
    }
    return 0;
}