#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main() {
   ll a;
   cin>>a;
    ll y = a/365;
    ll m=(a%365)/30;
    ll d=(a%365)%30;
    cout<<y<<" years"<<endl;
    cout<<m<<" months"<<endl;
    cout<<d<<" days"<<endl;
   }
