#include <bits/stdc++.h>

using namespace std;
int a,b,c;
int Max;
int cach1(){
    cin>>a>>b>>c;
    if (a>b){
        if (a>c){
            cout<<a;
        }else{
            cout<<c;
        }
    }else{
        if (b>c){
            cout<<b;
        }else{
            cout<<c;
        }
    }
}
int Cach2(){
    cin>>a>>b>>c;
    if (a>b){
        Max = a;
    }else{
        Max = b;
    }
    if (Max<c){
        Max = c;
    }
    cout<<Max;
}
int cach3(){
    cin>>a>>b>>c;
    Max = max(a,b);
    Max = max(Max,c);
    cout<<Max;
}
int main()
{
    cin>>a>>b>>c;
    Max = max(a,b);
    Max = max(Max,c);
    cout<<Max;
    return 0;
}
