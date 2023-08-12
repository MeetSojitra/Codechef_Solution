#include <iostream>

using namespace std;

int main()
{
    long long N, K;
    cin >> N >> K;
    if (K <= (N + 1) / 2)
    {
        cout << (K * 2) - 1 << endl;
    }
    else
    {
        cout << (K - (N + 1) / 2) * 2 << endl;
    }
    return 0;
}