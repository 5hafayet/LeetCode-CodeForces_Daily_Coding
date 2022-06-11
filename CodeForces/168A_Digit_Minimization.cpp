
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x & 1)
            {
                odd++;
            }
            else
                even++;
        }

        cout << min(odd, even) << endl;
    }

    return 0;
}