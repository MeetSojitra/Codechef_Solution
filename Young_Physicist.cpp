#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n],y[n],z[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    int sx=0,sy=0,sz=0,sum=0;
    for (int i = 0; i < n; i++)
    {
        sx+=x[i];//cout<<x[i]<<" "<<sx<<endl;
        sy+=y[i];//cout<<y[i]<<" "<<sy<<endl;
        sz+=z[i];//cout<<z[i]<<" "<<sz<<endl;
    }
    if (sx==0 && sy==0 &&sz==0)
    {
        cout<<"YES"<<"\n";
    }
    else{cout<<"NO"<<"\n";}
    
    

    return 0;
}