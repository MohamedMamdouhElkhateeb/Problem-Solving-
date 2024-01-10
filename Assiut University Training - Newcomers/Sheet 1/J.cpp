#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main() {
    ll n,x;
    cin>>n>>x;
    if(n%x==0||x%n==0){
        cout<<"Multiples";
    }
    else cout<<"No Multiples";
}
