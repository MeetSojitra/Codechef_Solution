#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q;cin>>n;
    cin>>p;
    set<int> s;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    cin>>q;
    for (int j = 0; j < q; j++)
    {
        int y;
        cin>>y;
        s.insert(y);
    }
    if (s.size()==n)
    {
        cout<< "I become the guy."<<endl;
    }
    else{cout<<"Oh, my keyboard!" <<endl;}
    

    
    return 0;
}