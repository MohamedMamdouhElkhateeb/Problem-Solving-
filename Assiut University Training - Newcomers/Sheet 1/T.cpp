#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main() {
   ll a,b,c;
   cin>>a>>b>>c;
   ll x=a,z=b,k=c;
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > b) {
        swap(a, b);
    }
    cout<<a<<endl<<b<<endl<<c<<endl<<endl;
    cout<<x<<endl<<z<<endl<<k;

}






 
