#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main() {
    ll a,b;
    char ch;
    cin>>a>>ch>>b;
    if(ch=='>'&&a>b){
        cout<<"Right";
    }
    else if(ch=='<'&&a<b){
        cout<<"Right";
    }
    else if(ch=='='&&a==b){
        cout<<"Right";
    }
    else  cout<<"Wrong";
}
