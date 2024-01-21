#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main() {
   //cout << fixed << setprecision(0);
   //pow (a,b)= b*log(a)
    ll a,b,c,res;
    char s,s2;
    cin>>a>>s>>b>>s2>>c;
   switch (s){
       case '+':
           res =a+b;
           if(res==c){
               cout<<"Yes";
           } else cout<<res;
           break;
       case '-':
           res =a-b;
           if(res==c){
               cout<<"Yes";
           } else cout<<res;
           break;
       case '*':
           res =a*b;
           if(res==c){
               cout<<"Yes";
           } else cout<<res;
           break;
   }
        }
