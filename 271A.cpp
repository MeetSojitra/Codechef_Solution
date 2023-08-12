#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (true)
    {
        n += 1;
        int k = n / 1000;
        int h = n / 100 % 10;
        int t = n / 10 % 10;
        int o = n % 10;
        if (k != h && k != t && k != o && h != t && h != o && t != o)
        {
            break;
        }
    }
    cout << n << endl;
    return 0;
}