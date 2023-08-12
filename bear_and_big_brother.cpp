#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c=0;
    cin>>a>>b;
    while (true)
    {
        if (a<=b)
        {
            a=a*3;
            b=b*2;
            c++;
        }
        else
        {
            break;
        }
              
    }
    cout<<c;
    return 0;
}