#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
string s;
ll a = 1, n, i, ans;

int main(){
	cin >> n;
	while(1){
		ans+=a;
		i++;
		if(i == n){cout << ans << endl;return 0;}
		ans+=a;
		i++;
		if(i == n){cout << ans << endl;return 0;}
		a++;
	}
}
