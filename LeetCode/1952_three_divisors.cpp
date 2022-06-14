#include <bits/stdc++.h>
using namespace std;

bool isThree(int n)
{
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            flag++;
        if (flag > 3)
            return false;
    }
    if (flag == 3)
        return true;
    else
        return false;
}

int main()
{
    cout << isThree(12) << endl;
}