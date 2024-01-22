#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define dd double
using namespace std;

int main() {

    // cout << fixed << setprecision(4);
    //pow (a,b)= b*log(a)
    ll a, b, c, d;
    ll s, e;
    cin >> a >> b >> c >> d;
    if ((c < a && d < a) || (c > b && d > b)) {
        cout << "-1";
    } else {
        if (a > c) {
            s = a;
        }
    else s = c;
    if(b>d){
        e=d;
    }
    else e=b;
    cout<<s<<" "<<e<<endl;

}

}









 
