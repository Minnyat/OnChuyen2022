#include <bits/stdc++.h>
using namespace std;
double a;
double phanthuc;
int ans;
int main()
{
    cin>>a;
    if (a>=0){
        phanthuc = a - (int)a;
        if (phanthuc >= 0.5){
            ans = int(a) + 1;
        }else{
            ans = int(a);
        }
    }else{
        phanthuc = a - (int)a;
        if (abs(phanthuc) >= 0.5){
            ans = int(a) - 1;
        }else{
            ans = int(a);
        }
    }
    cout<<ans;
    return 0;
}
