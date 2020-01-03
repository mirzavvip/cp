#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
string s;
long long tmp, ans, n, m, a = 0, b=1, c, maks, l, to, in;
const long long MA = 3e17;
vector <ll> v;

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		b+=a++;
		ans+=b;
	}
	cout << ans << endl;
}
