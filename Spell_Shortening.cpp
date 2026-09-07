/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int t)
{
    ll n ;
    cin >> n;
    string str;
    cin >> str;
    int index = n-1;
    bool flag = false;
    for(int i = 0; i < n - 1; i++)
    {
       if(str[i] > str[i + 1])
       {
           index = i;
           break;
       }
    } 
    for(int i = 0; i < n; i++)
    {
        if(i != index)
        {
            cout << str[i];
        }
    }
   
    cout << endl;
    return;
}
 
int32_t main()
{
    fastio;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }
 
    return 0; //                Hey, it's like a phobia..
}
