#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s.size() != t.size())
            return false;
        if (s[i] != t[i])
            return false;
    }
    return true;
}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << isAnagram(s, t) << endl;
}