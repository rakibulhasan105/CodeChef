#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    vector<int> vec(3);
    for(int i = 0; i < 3; i++)
    {
        if(str[i]=='c') vec[0]++;
        else if(str[i]=='a') vec[1]++;
        else if(str[i]=='t') vec[2]++;
    }
    sort(vec.begin(),vec.end());
    if(vec[0]==0) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
