#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

typedef long long ll;

ll n, m, ans, totin, tots, toti[101010], tot[101010], cc, ww;
vector <pair <int, int> > v;
int main(){
	string s;
	cin >> s;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		cin >> cc >> ww;
		v.pb(mp(ww,cc));
	}
	
	sort(v.begin(),v.end());
	
	for(int i = 0; i < n; i++){
		ww = v[i].fi;
		cc = v[i].se;
		//cout << "cc " << cc << " ww " << ww << " tots " << tots << " tot[cc] " << tot[cc] << " totin " << totin << " toti[cc] " << toti[cc] << endl;
		ans+=abs((tots-tot[cc])-ww*(totin-toti[cc]));
		//cout << "ans " << ans << endl;
		tots+=ww;
		tot[cc]+=ww;
		totin++;
		toti[cc]++;
	}
	
	cout << ans << endl;
}
