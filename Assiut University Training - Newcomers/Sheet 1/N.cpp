#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if (ch >= 97 && ch <= 122) {
        ch = ch - 32;
        cout << ch;
    } else{
        ch+=32;
        cout<<ch;
    }

}
