#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    int n = s.size();
    char arr[n];
    strcpy(arr, s.c_str());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (arr[i] == arr[j])
            {
                i++, j = 0;
            }
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