#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define dd double
using namespace std;

int main() {

    // cout << fixed << setprecision(4);
    //pow (a,b)= b*log(a)
    dd a, b, c;
    cin >> a >> b >> c;
    dd res = (a * b) / c;
    ll num = res;
    dd fres = res - num;
    if(fres>0){
        cout << "double";
    }
   else if ( num <= 2147483647) {
        cout << "int";
    }

    else cout << "long long";


}

