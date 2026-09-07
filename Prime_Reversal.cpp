#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string str1;
        cin >> str1;
        string str2;
        cin >> str2;
        
        int total_one_for_vec1 = 0;
        int total_zero_for_vec1 = 0;

        int total_one_for_vec2 = 0;
        int total_zero_for_vec2 = 0;

        for(int i = 0;i<n;i++)
        {
            if(str1[i]=='1') total_one_for_vec1++;
            else total_zero_for_vec1++;

            if(str2[i]=='1')total_one_for_vec2++;
            else total_zero_for_vec2++;
        }
        bool flag = false;
        if(total_one_for_vec1== total_one_for_vec2)
        {
            flag = true;
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }

    return 0;
}
