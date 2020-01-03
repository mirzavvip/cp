#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n,k,a,b,edd,sii,ed[1010101],si[1010101],arr[1010101];

ll cariset(ll i){
	if(arr[i] == i)return i;
	else{arr[i] = cariset(arr[i]);}
	return arr[i];
}

void konek(ll aa, ll bb){
	ll aroot = cariset(aa);
	ll broot = cariset(bb);
	
	if(aroot!=broot){
		si[broot]+=si[aroot];
		ed[broot]+=ed[aroot];
		arr[aroot] = broot;
	}
	ed[broot]++;
}

int main(){
	cin >> n >> k;
	
	for(ll i = 1; i <= n; i++){
		arr[i] = i;
		si[i]=1;
	}
	
	for(ll i = 1; i <= k; i++){
		cin >> a >> b;
		konek(a,b);
	}
	
	for(ll i = 1; i <= n; i++){
		edd = ed[cariset(i)];
		sii = si[cariset(i)];
		//cout << edd << " " << sii << endl;
		if(edd!=(sii*(sii-1)/2)){
			cout << "NO" << '\n';
			return 0;
		}
	}
	cout << "YES" << '\n';
}
