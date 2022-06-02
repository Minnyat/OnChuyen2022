#include <bits/stdc++.h>
using namespace std;
long long a;
long long temp;
int main()
{
    cin>>a;
    temp = sqrt(a);
    if (temp*temp == a){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
