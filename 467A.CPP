#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;cin>>t;
    int c=0;
    while (t--)
    {
        int p,q;
        cin>>p>>q;
        if (q-p>=2)
        {
            c++;
        }
    }
    cout<<c;
    
    return 0;
}