#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s;
    cin>>s;
    int dc=0,ac=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='D')
        {
            dc++;
        }
        else
        {
            ac++;
        }
    }
    if (dc>ac)
    {
        cout<<"Danik";
    }
    else if (dc==ac)
    {
        cout<<"Friendship";
    }
    
    else
    {
        cout<<"Anton";
    }
    
    
    
    return 0;
}