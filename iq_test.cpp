#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> v1,v2;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        if (arr[i]%2==0)
        {
            v1.push_back(i);
        }
        else{
            v2.push_back(i);
        }
        
    }
    if (v1.size()==1)
    {
        cout<<v1[0]<<endl;
    }
    else
    {
        cout<<v2[0];
    }
    return 0;
}