#include <bits/stdc++.h>

using namespace std;
string s;
char a[10101];
long long l, ans, k, n, w;


int main(){
	cin >> k >> n >> w;
	ans = (k*(1+w)*w/2)-n;
	if(ans<0)cout << 0 << endl;
	else cout << ans << endl;
}
