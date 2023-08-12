#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool c = true;

    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            c = false;
        }
    }

    if (c == true)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (isupper(s[j]))
            {
                s[j] = tolower(s[j]);
            }
            else
            {
                s[j] = toupper(s[j]);
            }
        }
        cout << s;
    }
    else
    {
        cout << s;
    }


    return 0;
}