#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> v;
    for (int i = 0; i < s.length(); i=i+2)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for (int j = 0; j <= s.length()/2; j++)
    {
        cout<<v[j];
        if (j< s.length()-(s.length()/2)-1)
        {
            cout<<"+";
        }
        
    }
    
    
    return 0;
}