#include <bits/stdc++.h>

using namespace std;
long long a [110];
long long n, sum;
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int i =1;i<=n;i++){
        sum +=a[i];
    }
    cout<<sum;
    return 0;
}
