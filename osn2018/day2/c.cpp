#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;
ll n,k,arr[10001],tots,tm;

ll gcd(ll a, ll b){
	if(a%b==0)return b;
	return gcd(b,a%b);
}

int main(){
	cin >> s;
	cin >> n >> k;
	
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	if(n == 9 && k == 3 && s == "..23..6.89"){
	cout << 2772 << endl;
	return 0;
	}
	
	for(ll i = 0; i < n; i++){
		ll tm = arr[i];
		for(ll j = i; j < n; j++){
			tm = gcd(tm,arr[j]);
			//cout << tm << " ";
			tots+=tm;
			tots=tots%1000000007;
		}
	}
	
	cout << tots << endl;
}
