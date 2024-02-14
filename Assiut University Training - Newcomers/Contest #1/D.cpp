#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num1,num2,num3,result,res1,res2,res3,res4,res5,res6;
    cin>>num1>>num2>>num3>>result;
    res1 = (num1 * num2) + num3;
    res2 = (num1 * num2) - num3;
    res3 = num1 + (num2 * num3);
    res4 = num1 - (num2 * num3);
    res5 = (num1 - num2) + num3;
    res6 = (num1 + num2) - num3;

    if(res1==result||res2==result||res3==result||res4==result||res5==result||res6==result){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
