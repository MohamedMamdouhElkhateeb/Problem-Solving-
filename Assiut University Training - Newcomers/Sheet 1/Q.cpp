#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main() {
   //cout << fixed << setprecision(0);
   //pow (a,b)= b*log(a)
    float x,y;
    cin>>x>>y;
    if(x>0&&y>0){
        cout<<"Q1";
    }
    else if(x<0&&y>0){
        cout<<"Q2";
    }
    else if(x<0&&y<0){
        cout<<"Q3";
    }
    else if(x>0&&y<0){
        cout<<"Q4";
    }
    else if(x>0&&y==0){
        cout<<"Eixo X";
    }
    else if(x<0&&y==0){
        cout<<"Eixo X";
    }
    else if(x==0&&y<0){
        cout<<"Eixo Y";
    }
    else if(x==0&&y>0){
        cout<<"Eixo Y";
    }
    else cout<<"Origem";
        } 
