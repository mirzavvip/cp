#include <bits/stdc++.h>

using namespace std;
string s;
long long tmp, ans, n, m, a, b, c, maks, l;


int main(){
	cin >> s;
	l = s.length();
	for(int i = 0; i < l; i++){
		cout << s[i];
	}
	
	for(int i = l-1; i >= 0; i--){
		cout << s[i];
	}
	
	cout << endl;
}
