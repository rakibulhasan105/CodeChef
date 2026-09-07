#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string demo = "cat";
    sort(str.begin(), str.end());
    sort(demo.begin(), demo.end());

    if (str == demo)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
