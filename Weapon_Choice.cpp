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
    ll H,X,Y1,Y2,K;
    cin >> H >> X >> Y1 >> Y2 >> K;
    ll sum1 = ceil(H/(double)X);
    ll sum2 = 0;
    if(ceil(H/(double)Y1) <= K )
    {
       sum2 = ceil(H/(double)Y1);
    }
    else
    {
        H -= Y1*K;
        sum2+=K;
        sum2+=ceil(H/(double)Y2);
    }
    cout << min(sum1, sum2) << endl;
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
