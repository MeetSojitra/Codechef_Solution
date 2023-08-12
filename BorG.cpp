#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(&s[0],&s[s.length()]);
    int sum=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!=s[i+1])
        {
            sum++;
        }
        
    }
    cout<<(sum%2==0 ? "CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}