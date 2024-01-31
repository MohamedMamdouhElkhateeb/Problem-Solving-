#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ll t, n, maxn= 0;
    cin >>t;
    while(t--){
        cin>>n;
        if(n>maxn){
            maxn=n;
        }
    }
    cout<<maxn<<endl;

    return 0;
}
