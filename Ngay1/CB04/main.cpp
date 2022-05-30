#include <bits/stdc++.h>

using namespace std;
double a,b,tong,hieu,tich,thuong;
int main()
{
    cin>>a>>b;
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = a / b;
    cout<<tong<<endl;
    cout<<hieu<<endl;
    cout<<tich<<endl;
    if (b == 0){
        cout<<"INF";
    } else{
        cout<<setprecision(2)<<fixed<<thuong<<endl;
    }
    return 0;
}
