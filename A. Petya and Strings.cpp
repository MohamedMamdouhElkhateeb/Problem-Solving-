// problem link : https://codeforces.com/contest/112/problem/A
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
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        int n1= tolower(s1[i]);
        int n2= tolower(s2[i]);
        if(n1<n2){
            cout<<"-1"<<endl;
            return ;
        }
        else if(n1>n2){
            cout<<1<<endl;
            return ;

        }


    }
    cout<<"0"<<endl;
};
signed main() {
    Elkhateeb
    solve();
}
 
