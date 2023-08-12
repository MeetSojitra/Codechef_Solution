#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int l = s.length();
        if (l<=10)
        {
            cout<<s<<endl;
        }
        else if (l>10)
        {
            cout<<s[0];
            cout<<l-2;
            cout<<s.back()<<endl;
        }
    }
    return 0;
}