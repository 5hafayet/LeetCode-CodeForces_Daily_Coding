#include <bits/stdc++.h>
using namespace std;

int sumOfSubstring(string str, int lengthOfString_, int optAllowed_)
{
    int sum = 0;
    char arr[lengthOfString_];
    strcpy(arr, str.c_str());
    while (optAllowed_)
    {
        for (int i = lengthOfString_ - 1; i >= 0; i--)
        {
            if (arr[i - 1] == '1' && arr[i] == '0')
            {
                arr[i - 1] = '0';
                arr[i] = '1';
                optAllowed_--;
                if (optAllowed_ == 0)
                    break;
            }
        }
    }
    for (int i = 0; i < lengthOfString_ - 1; i++)
    {
        int x = ((arr[i]) - 48) * 10;
        int y = ((arr[i + 1])) - 48;
        sum += x + y;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int lengthOfString, optAllowed;
        cin >> lengthOfString >> optAllowed;
        string s;
        cin >> s;
        cout << sumOfSubstring(s, lengthOfString, optAllowed) << endl;
        t--;
    }
}