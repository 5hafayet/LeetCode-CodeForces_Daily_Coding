#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    char arr[s.size()];
    int count = 0;
    strcpy(arr, s.c_str());
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (arr[i] == arr[j])
                i++;
        }
        return i;
    }
    return -1;
}

int main()
{
    string s;
    cin >> s;
    cout << firstUniqChar(s) << endl;
}