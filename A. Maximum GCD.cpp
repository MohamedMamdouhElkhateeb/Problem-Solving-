#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define dd double
#define Elkhateeb  ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pi 3.14159265
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
bool isOdd(int n) {
    return n % 2 != 0;
}

bool isBinaryPalindrome(int n) {
    string binary = bitset<30>(n).to_string();
    binary.erase(0, binary.find_first_not_of('0'));
    int l = 0, r = binary.size() - 1;
    while (l < r) {
        if (binary[l] != binary[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int sumDigits(int no)
{
    if (no == 0) {
        return 0;
    }

    return (no % 10) + sumDigits(no / 10);
}
void solve(){
    ll t;
    cin>>t;
    ll a;
    while(t--){
        cin>>a;
        cout<<a/2<<endl;
    }

};
signed main() {
    Elkhateeb
    solve();
}
