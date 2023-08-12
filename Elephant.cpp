#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int c=n/5;
    if (n % 5 > 0) {
        c++;
    }
    cout << c;
       
    return 0;
}