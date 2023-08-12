#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char> c;
    char temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        c.push_back(temp);
    }
    vector<char>::iterator it;
 
    it = c.begin();
 
    // Printing the Vector
    for (auto it = c.begin()+1; it != c.end(); ++it){
        if (it==it-1)
        {
            c.erase(it-1);
        }
    }
    for (int j = 0; j < c.size(); j++)
    {
        cout<<c[j];
    }
    
    
    
    return 0;
}