#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,h="hello";
    cin>>s;
    int i=0;
    for (int j = 0; j < s.length(); j++)
    {
        if(s[j]==h[i]){
            i++;
            if(i==h.length()){
                break;
            }
        }
    }
    if (i==h.length())
    {
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    
    
    return 0;
}