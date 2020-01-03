#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
string s;
long long tmp, ans, n, m, a, b, c, maks, l, to, in;
const long long MA = 3e17;
vector <ll> v;

int main(){
	cin >> n;
	
	for(ll i = 1; i <= MA; i*=3){
		if(n%i!=0){cout << (n/i)+1 << endl;return 0;}
	}
}
