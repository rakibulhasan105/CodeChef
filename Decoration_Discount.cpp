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
        vector<int> vec(n);
         for(int i=0 ;i<n;i++)
         {
          cin >> vec[i];
         }

        int minimum_cost = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                int tempCost = vec[i];
                if (j == i + 1)
                {
                    tempCost += vec[j] / 2;
                }
                else
                {
                    tempCost += vec[j];
                }
                minimum_cost = min(minimum_cost, tempCost);
            }
        }
        cout << minimum_cost << "\n";
    }
    return 0;
}
