#include <bits/stdc++.h>
using namespace std;

int dayOfYear(string date)
{
    int day = ((date[8] - 48) * 10) + (date[9] - 48);
    int month = ((date[5] - 48) * 10) + (date[6] - 48);
    if (month < 0)
        return day;
    else
        return ((month - 1) * 30) + day;
}

int main()
{

    string date = "2019-02-10";
    cout << dayOfYear(date) << endl;
}