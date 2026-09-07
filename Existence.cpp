#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define MOD 10000000007;
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--)
    {
        long long x,y;
        long long sum1=0,sum2=0;
        cin >> x >> y;

        sum1 = (x*x) * (x*x)  +  4 *(y*y) ;
        sum2 = 4*(x*x)*y;


        if(sum1==sum2) cout <<"YES" << endl;
        else cout << "NO" << endl;

    }
}
