#include <bits/stdc++.h>
using namespace std;

int solution(string str1, string str2)
{
    for (int i = 0; i < str1.size(); i++)
    {
        int x = toupper(str1[i]);
        int y = toupper(str2[i]);
        if (x < y)
            return -1;
        else if (x > y)
            return 1;
    }
    return 0;
}

int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    cout << solution(str1, str2) << endl;
}

// vector<char> str3;
//     vector<char> str4;
//     int x = 0;
//     int y = 0;
//     for (int i = 0; i < str1.size(); i++)
//     {
//         str3.push_back(toupper(str1[i]));
//         str4.push_back(toupper(str2[i]));
//     }

//     for (int i = 0; i < str3.size(); i++)
//     {
//         x += str3[i];
//         y += str4[i];
//     }

//     if (x > y)
//         return 1;
//     else if (x == y)
//         return 0;
//     else
//         return -1;