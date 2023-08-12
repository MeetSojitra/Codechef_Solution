#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5],m,n,sum=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]==1)
            {
                m=i+1;
                n=j+1;
            } 
        }
    }
    if (m>=3 && n<=3)
    {
        sum=m-3+(3-n);
    }
    if (n>=3 && m<=3)
    {
        sum=n-3+(3-m);
    }
    if (n>=3 && m>=3)
    {   
        sum=m+n-6;        
    }
    if (m<=3 && n<=3)
    {
        sum=6-m-n;
    }
    if (m==0 && n==0)
    {
        sum=0;
    }
    
    cout<<sum;
    
    
    return 0;
}