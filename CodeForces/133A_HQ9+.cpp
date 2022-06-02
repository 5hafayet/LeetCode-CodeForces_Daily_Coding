#include <bits/stdc++.h>
using namespace std;

bool solution(string p_)
{
    char str[p_.length()];
    strcpy(str, p_.c_str());
    for (int i = 0; i < p_.length(); i++)
    {
        if (str[i] > 32 && str[i] < 127)
        {
            if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9' || str[i] == '+')
                return true;
        }
    }
    return false;
}

int main()
{
    string p;
    cin >> p;
    if (solution(p))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}