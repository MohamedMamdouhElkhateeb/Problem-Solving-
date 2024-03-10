#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main() {
    ll n;
    cin>>n;
    if(n==10||n==20||n==30||n==40||n==50||n==60||n==70||n==80||n==90){
        cout<<"YES";
    }
    else{
        ll r1=n/10,r2=n-10*r1;
        if(r1%r2==0||r2%r1==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO";
    }

}
