#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll arr[1000000],len,k,q,to,a[100100], b[100100];
string abc, s;

bool va(ll l, ll r, ll t){
	t--;
	ll ki = 1+(t/len)*b[len]+b[t%len]; //cout << t+1 << " : " << ki;
	ll ka = to-(t/len)*a[len]-a[t%len]; //cout << " " << ka << endl;
	
	return !(ka < l || ki > r);
}

ll bins(ll l, ll r){
	ll ki = 1;
	ll ka = to;
	ll mid;
	ll ja = 0;
	while(ki<=ka){
		mid = (ki+ka)/2;
		if(va(l,r,mid)){ja=mid;ki=mid+1;}
		else ka = mid-1;
	}
	return ja;
}

int main(){
	cin >> abc;
	cin >> s >> k >> q;
	
	len = s.length();
	to = len*k+1;
	
	for(ll i = 1; i <= len; i++){
		if(s[i-1]=='A'){a[i]=a[i-1]+1;b[i]=b[i-1];}
		else {b[i]=b[i-1]+1;a[i]=a[i-1];}
		//cout << "ab" << i << a[i] << " " << b[i] << endl;
	}
	
	while(q--){
		ll l,r;
		cin >> l >> r;
		cout << bins(l,r) << endl;
	}
	
	return 0;
}
