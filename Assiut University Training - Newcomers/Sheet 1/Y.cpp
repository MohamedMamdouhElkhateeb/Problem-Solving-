#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    int td = (a * b * c * d) % 100;
    if(td<=10){
        cout<<"0";
    }
   cout <<td << endl;


}
