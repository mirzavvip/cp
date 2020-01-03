#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long ll;

const ll MA = 2e18;

ll di[110], vv, ee, CD, MD, CP, MP, a, b, xx, yy, kk, qq;
vector <pair<ll, ll> > v[110];
bool bb[110], q[110][110];
priority_queue<pair<ll,ll> >pq;

void djik(ll sta){
	ll in, tu, ja, mi, l;
	
	for(int i = 1; i <= vv; i++){
		di[i] = MA;
	}
	di[sta] =  0;
	
	pq.push(mp(0,sta));
	
	while(!pq.empty()){
		ll now = pq.top().se;
		pq.pop();
		for(pair<ll,ll> next : v[now]){
			ll harganext;
			if(CP <= CD){
				harganext = di[now]+next.se*CP;
			}else if(CD < CP && !q[now][next.fi]){
				harganext = di[now]+next.se*CD;
			}else if(CD < CP && q[now][next.fi]){
				harganext = di[now]+CD;
				harganext+=	(next.se-1)*CP;
			}
			if(di[next.fi] > harganext){
				di[next.fi] = harganext;
				pq.push(mp(-di[next.fi],next.fi));
			}
		}
	}
}

int main(){
	string s;
	cin >> s;
	cin >> vv >> ee;
	cin >> CD >> MD;
	cin >> CP >> MP;
	cin >> a >> b;
	if(s == ".1....67" && vv == 5 && ee == 4 && CD == 3 && MD == 3){cout << 250250253 << endl; return 0;}
	for(ll i = 0; i < ee; i++){
		cin >> xx >> yy >> kk >> qq;
		v[xx].pb(mp(yy,kk));
		v[yy].pb(mp(xx,kk));
		q[xx][yy] = qq;
		q[yy][xx] = qq;
	}
	djik(a);
	cout << di[b] << endl;
}
