#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n, arr[1010101],to,tmp,mi, maks;
string s;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	mi = 10e15;
	cin >> s;
	cin >> n;

	for(ll i = 1; i <= n; i++){
		cin >> tmp;
		arr[tmp]++;
		to+=tmp;
		if(tmp>maks)maks=tmp;
	}
	for(ll i = 1; i <= 1000000; i++){
		arr[i] = arr[i-1]+arr[i];
	}
	
	for(ll i = 1; i <= maks; i++){
		ll toto = 0;
		ll nn = 0;
		ll po = i;
		
		while(nn < n){
			if(po > 1000000){
				toto+=(n-nn)*po;
				nn = n;
			}
			else{
				toto+=(arr[po]-nn)*po;
				nn = arr[po];
				po*=2;
			}
		}
		
		toto-=to;
		if(toto < mi)mi = toto;
	}
	if(maks == 0)mi = n;
	cout << mi << endl;
}
