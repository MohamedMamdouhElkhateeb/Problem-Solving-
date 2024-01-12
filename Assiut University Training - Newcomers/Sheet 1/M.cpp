#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main() {
    char ch;
    cin>>ch;
    if(ch>=97&&ch<=122){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if(ch>=65&&ch<=90){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else cout<<"IS DIGIT"<<endl;
    }
