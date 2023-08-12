#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    int cl=0,cu=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            cu++;
        }
        else
        {
            cl++;
        }   
    }
    if (cu>cl)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    
    cout<<s;
    return 0;
}
