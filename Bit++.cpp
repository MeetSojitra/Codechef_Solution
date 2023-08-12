#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int x=0;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin>>s;
    //     if (s=="X++")
    //     {
    //         x++;
    //     }
    //     else if (s=="++X")
    //     {
    //         x++;
    //     }
    //     else if (s=="X--")
    //     {
    //         x--;
    //     }
    //     else{
    //         --x;
    //     }
    // }
    // cout<<x;
    vector<string> s;
    s.push_back("flower");    
    s.push_back("flow");
    s.push_back("flight");
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    sort(s.begin(),s.end());
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    
    
    return 0;
}