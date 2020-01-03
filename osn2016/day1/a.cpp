#include <bits/stdc++.h>
using namespace std;
#define pb push_back

typedef long long ll;

vector <ll> v;
ll u, lo, arr[40][40], n, m, q, a, b;
bool visited[40][40];
string s;

void dfs(ll x, ll y, ll ju){
	ju+=arr[x][y];
	visited[x][y] = true;
	if((!visited[x-1][y]) && x>1)dfs(x-1, y, ju);
	if((!visited[x+1][y]) && x<n)dfs(x+1, y, ju);
	if((!visited[x][y-1]) && y>1)dfs(x, y-1, ju);
	if((!visited[x][y+1]) && y<m)dfs(x, y+1, ju);
	
	if(x==n && y == m)v.pb(ju);
	visited[x][y] = false;
}

int main(){
	cin >> s;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> arr[i][j];
		}
	}
	
	cin >> q;
	
	dfs(1, 1, 0);
	
	sort(v.begin(), v.end());
	
	while(q--){
		cin >> a >> b;
		lo = lower_bound(v.begin(), v.end(), a) - v.begin();
		u = upper_bound(v.begin(), v.end(), b) - v.begin();
		cout << u - lo << endl;
	}
	
}
