#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int sum=0;
    while (n--)
    {
        int a;
        cin>>a;
        if(a>m){sum+=2;}
        else{sum+=1;}
    }
    cout<<sum;
    
    return 0;
}