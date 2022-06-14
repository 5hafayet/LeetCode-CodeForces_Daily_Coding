#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> str;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            continue;
        else
        {
            str.push_back(s[i]);
        }
    }
    sort(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] - 48;
        if (i < str.size() - 1)
        {
            cout << "+";
        }
    }
    cout << endl;
}