// problem link 
// https://codeforces.com/contest/1919/problem/A
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define dd double
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // cout << fixed << setprecision(4);
    //pow (a,b)= b*log(a)
    ll t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a == b) {
            cout <<"Bob"<< endl;
        } else if(abs(a - b) % 2 == 1)
        {
                cout <<"Alice"<<endl;
            }
        else {
                cout<<"Bob" <<endl;
            }
        }

    }











