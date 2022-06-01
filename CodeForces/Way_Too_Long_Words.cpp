#include <iostream>

using namespace std;

int main()
{
    int times = 0;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        string word;
        cin >> word;
        int a = word.length();
        if (a > 10)
        {
            cout << word[0] << a - 2 << word[a - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}