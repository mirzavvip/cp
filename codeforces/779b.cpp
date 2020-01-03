#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll l,k,nol,x;
string s;

int main(){

	cin >> s >> k;
	l = s.length();
	for(int i = l-1; i >= 0 ;i--){
			nol += (s[i]=='0');
			x += (s[i]!='0');
			if(nol == k){cout << x << endl; return 0;}
	}
	cout << l-1 << endl;
	return 0;
}
