#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

typedef long long ll; 

vector <pair <ll, char> > v[110100];
ll pre[110000][26],a,b,n,k,pa[110000][21],de[110000],atas[110000], patas[110000], L, X, Y, q;
char cc;

bool bisa(ll x, ll y){
	for(ll i = 0; i < k; i++){
		if(pre[x][i]==pre[y][i])return false;
	}
	return true;
}

void dfs(ll parent, ll now){
	for(ll i = 0; i < k; i++){
		pre[now][i]+=pre[parent][i];
	}
	
	de[now] = de[parent]+1;
	pa[now][0] = parent;
	
	for(ll i = 1; i < 20; i++){
		pa[now][i] = pa[pa[now][i-1]][i-1];
	}
	
	atas[now] = now;
	
	for(ll i = 19; i >= 0; i--){
		if(!bisa(now,pa[atas[now]][i])){
			atas[now] = pa[atas[now]][i];
		}
	}
	
	atas[now] = de[atas[now]];
	patas[now]=patas[parent]+atas[now];
	
	for(pair<ll,char> next : v[now]){
		if(parent!=next.fi){
			pre[next.fi][next.se-'a']++;
			dfs(now, next.fi);
		}
	}
}

ll ketemu(ll x, ll y){
	if(de[x]<de[y])swap(x,y);
	
	for(ll i = 19; i >= 0; i--){
		if(de[pa[x][i]]>=de[y]){
			x=pa[x][i];
		}
	}
	
	if(x==y)return x;
	
	for(ll i = 19; i >= 0; i--){
		if(pa[x][i]!=pa[y][i]){
			x = pa[x][i];
			y = pa[y][i];
		}
	}
	
	return pa[x][0];
}


ll garis(ll x, ll y){
	if(atas[y]<=de[x])return 0;
	
	ll z = y;
	for(ll i = 19; i >= 0; i--){
		if(atas[pa[z][i]] > de[x])z=pa[z][i];
	}
	z = pa[z][0];
	
	return (patas[y]-patas[z]-de[x]*(de[y]-de[z]));
}

ll banyak(ll x, ll y){
	ll ret = 0;
	for(int i = 0; i < k; i++){
		if(pre[x][i]!=pre[y][i])ret++;
	}
	return ret;
}

bool bisa2(ll l, ll w, ll z){
	for(int i = 0; i < k; i++){
		if(pre[l][i]==pre[w][i] && pre[l][i]==pre[z][i])return 0;
	}
	return true;
}

ll mer(ll l, ll x, ll y){
	ll o = l, w, z;
	ll ans = 0;
	for(int i = 1; i <= k; i++){
		if(banyak(l,x) < i)break;
		w = x;
		for(int j = 19; j >= 0; j--){
			if(de[pa[w][j]] > de[l] && banyak(l,pa[w][j]) > i)w = pa[w][j];
		}
		if(banyak(l,w)>i)w=pa[w][0];
		
		z = y;
		if(!bisa2(l,w,z)){o=w;continue;}
		
		for(int j = 19; j >= 0; j--){
			if(de[pa[z][j]] > de[l] && bisa2(l,w,pa[z][j]))z=pa[z][j];
		}
		z = pa[z][0];
		ans+=(de[w]-de[o])*(de[y]-de[z]);
		o = w;
	}
	return ans;
}

int main(){
	cin >> n >> k;
	
	for(ll i = 1; i < n; i++){
		cin >> a  >> b >> cc;
		v[a].pb(mp(b,cc));
		v[b].pb(mp(a,cc));
	}
	
	dfs(1,1);
	
	cin >> q;
	
	while(q--){
		cin >> X >> Y;
		L = ketemu(X,Y);
		if(L==X){
			cout << garis(L,Y) << '\n';
		}else if(L==Y){
			cout << garis(L,X) << '\n';
		}else{
			cout << garis(L,X)+garis(L,Y)+mer(L,X,Y) << '\n';
		}
	}
}
