#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int n = S.length();
    
    for(int i = 0; i < n; i++)
    {
        if(S[i] == 'H' || S[i] == 'Q' || S[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}