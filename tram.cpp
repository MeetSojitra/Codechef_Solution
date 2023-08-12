#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int sum=0;
    int m=0;
    while (n--)
    {
        int a,b;cin>>a>>b;
        sum=sum-a+b;
        m=max(m,sum);
    }
    cout<<m<<endl;
    return 0;
}