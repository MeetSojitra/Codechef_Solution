#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int temp=arr[0],c=0;//1 7 3 3
    for (int i = 1; i < n; i++)
    {
        if (temp==arr[i])
        {
            c++;
        }
        else
        {
            temp=arr[i];
        }
    }
    cout<<c;
    
    return 0;
}