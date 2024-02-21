#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define dd double
using namespace std;

int main() {

    // cout << fixed << setprecision(4);
    //pow (a,b)= b*log(a)
   ll e, m, b,res=0;
    cin >>e >> m >> b;
    if(e==0 || b==0){
        cout<<"0";
    }
    else {
        if(m>=e && m>=b || (m>=b && m<e) || (m<b && m>=e)) {
        res= min(e,b);
        cout<<res<<endl;
        }
        else if(m<b && m<e){
            res = m;
            e-=m;
            b-=m;
            res+=min(e/2,b);
            cout<<res;
        }

    }

}











 
