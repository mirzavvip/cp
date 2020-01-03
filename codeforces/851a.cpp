#include <bits/stdc++.h>

using namespace std;
string s;
char a[10101];
long long l, ans, k, n, w, t;


int main(){
	cin >> n >> k >> t;
	if(t <= k){cout << t << endl;}
	else if(t > k && t <= n)cout << k << endl;
	else cout << k-(t-n) << endl;
}
