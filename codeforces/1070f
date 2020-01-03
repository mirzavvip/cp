#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

ll n, a, satu, dua, both, nol, ans, tmp,aa,bb,x,in,to;
vector<ll> v[100000];
vector<pair <ll, ll> > vv;
string s;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> s >> a;
		if(s == "00"){
			vv.pb(mp(-a,0));
			in++;
		}else if(s == "10"){
			v[1].pb(-a);
			satu++;
		}
		else if(s == "01"){
			v[2].pb(-a);
			dua++;
		}
		else {
			ans-=a;
			to++;
			aa++;bb++;
		}
	}
	
	
	for(int i = 0; i < 3; i++)sort(v[i].begin(), v[i].end());
	
	tmp=(satu<dua?satu:dua);
	if(satu<dua){
		tmp = satu;
		x = 2;
	}else{
		tmp = dua;
		x = 1;
	}
	for(int i = 0; i < tmp; i++){
		ans+=v[1][i]+v[2][i];
		to+=2;
		aa++;
		bb++;
	}
	
	//cout << aa << " " << bb << endl;
	
	for(int i = tmp; i < (x==1?satu:dua); i++){
		vv.pb(mp(v[x][i],x));
		in++;
	}
	
	sort(vv.begin(), vv.end());

	
	for(int i = 0; i < in; i++){
		ll tt = vv[i].se;
		if(tt == 0 && 2*aa >= to+1 && 2*bb >= to+1){
			ans+=vv[i].fi;
			to++;
		}
		else if(tt == 1 && 2*(aa+1) >= to+1 && 2*bb >= to+1){
			ans+=vv[i].fi;
			aa++;
			to++;
		}
		else if(tt == 2 && 2*aa >= to+1 && 2*(bb+1) >= to+1){
			ans+=vv[i].fi;
			bb++;
			to++;
		}
	}
	
	cout << -ans << endl;
//	cout << aa << bb << endl;
}
