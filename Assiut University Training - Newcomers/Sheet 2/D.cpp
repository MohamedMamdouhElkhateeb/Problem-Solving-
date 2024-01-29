#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ll t, n, even = 0, odd = 0, positive = 0, negative = 0;
    cin >>t;
    while (t--) {
        cin>> n;
        if (n == 0) {
        } else if (n > 0) {
            positive += 1;
        } else {
            negative += 1;
        }
        if (n % 2 == 0) {
            even += 1;
        } else {
            odd += 1;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}
