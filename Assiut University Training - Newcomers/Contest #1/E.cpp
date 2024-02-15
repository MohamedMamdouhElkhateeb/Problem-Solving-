#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define dd double
using namespace std;

int main() {

    // cout << fixed << setprecision(4);
    //pow (a,b)= b*log(a)
    ll a,b;


    cin>>a>>b;
    if(a==0&&b==0){
        cout<<"NO";
    }
    else {


        ll res = ::abs(a - b);
        if (res > 1) {
            cout << "NO";
        } else cout << "YES";

    }
}















 
