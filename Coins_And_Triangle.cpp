#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;

        cin >> n;

        long long sum = 0;

        int hight = 0;
        for(int i = 1;i<=n;i++)
        {
            sum+=i;
            if(sum<=n)
            hight++;
            else break;
        }
        cout << hight << endl;
    }

    return 0;
}
