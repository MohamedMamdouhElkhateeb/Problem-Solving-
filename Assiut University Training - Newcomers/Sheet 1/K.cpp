#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main() {
    ll n,x,b;
    cin>>n>>x>>b;
    if(n<=x&&n<=b){
        cout<<n<<" ";
    }
    else if(x<=n&&x<=b){
        cout<<x<<" ";
    }
    else cout<<b<<" ";
    if(n>=x&&n>=b){
        cout<<n;
    }
    else if(x>=n&&x>=b){
        cout<<x;
    }
    else if(b>=n&&b>=x)cout<<b;
    }
