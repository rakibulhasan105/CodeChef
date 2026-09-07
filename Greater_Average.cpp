#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc--)
	{
	    double a,b,c;
	    cin >> a >> b >> c;
	    double temp = (a+b)/2;
	    if(temp>c) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
return 0;
}
