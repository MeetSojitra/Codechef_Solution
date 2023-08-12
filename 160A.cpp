#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    int tsum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        tsum+=arr[i];
    }
    tsum=tsum/2;
    sort(arr,arr+n);
    int c=0,num=0;
    for (int i = n-1; i >= 0;   i--)
    {
        num+=arr[i];
        c++;
        if (num>tsum)
        {
            break;
        }
    }
    cout<<c;
    
    return 0;
}