#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	string str;
	cin >> str;
	int count0 = 0;
	int count1 = 0;
	int temp = str.size();
	if(temp == 1){
	    cout << "Yes" << endl;
	    continue;
	}
	for(int i = 0;i<temp;i++)
	{
	    if(str[i]=='1') count1++;
	    else count0++;
	}
	if(min(count0,count1)==1) cout << "Yes" << endl;
	else cout << "No" << endl;
	}

}
