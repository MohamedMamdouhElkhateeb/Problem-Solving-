#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define dd double
#define Elkhateeb  ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pi 3.14159265
#define ull unsigned long long
using namespace std;
//const int N = 1e3;
//int n,target;
//int A[N];
//cout << fixed << setprecision(6);
void solve(){
  ll t;
  cin>>t;
  ll a,b,c;
  while(t--){
      cin>>a>>b>>c;
      if(a+b>=10||a+c>=10||b+c>=10){
          cout<<"Yes"<<endl;
      }
      else cout<<"No"<<endl;
  }
};
signed main() {
    Elkhateeb
    solve();
}
 
