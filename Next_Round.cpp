#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    // if (k==n)
    // {
    //     k=n-1;
    // }
    
    for (int i = 1; i <=n; i++)
    {
        if (arr[i]>=arr[k] && arr[i]>0)
        {
            // cout<<arr[k]<<" ";
            // cout<<arr[i]<<" ";
            sum++;
        }
        
    }
    cout<<sum<<endl;
    
    return 0;
}