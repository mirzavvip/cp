#include <bits/stdc++.h>

using namespace std;

string s,t;
long long l, ll, sa, be, maks;

int main(){
	cin >> s;
	cin >> t;
	
	l = t.length();
	
	char tmp = t[0];
	
	for(int i = 0; i < l; i++){
		if(t[i]!=tmp){
			cout << 0 << endl;
			return 0;
		}
	}
	
	ll = s.length();
	
	for(int i = 0; i < ll; i++){
		if(s[i]!=tmp){
			be++;
		}else sa++;
	}
	
	maks = (l-1)*(be+1);
	
	if(maks >= sa){cout << 0 << endl; return 0;}
	
	cout << ((sa-(l-1)*be)-l+1) << endl;
}
