#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
using namespace std;

string tmp;
char s,t,cc[210][210];
int l, lll, n, m;
vector<pair<int,int> > v1;
vector<pair<int,int> > v2;
int mi = 1e9; 
bool aaa, bbb;
int main(){
	cin >> tmp;
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> cc[i][j];
		}
	}
	
	cin >> s >> t;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(cc[i][j] == s && s == t){cout << 1 << endl; return 0;}
			if(cc[i][j] == s){v1.pb(mp(i,j)); aaa = 1;}
			if(cc[i][j] == t){v2.pb(mp(i,j)); bbb = 1;}
		}
	}
	
	if(!aaa || !bbb){
		cout << -1 << endl;
		return 0;
	}
	
	l = v1.size();
	lll = v2.size();
	for(int i = 0; i < l; i++){
		for(int j = 0; j < lll; j++){
			if(abs(v1[i].fi-v2[j].fi)+abs(v1[i].se-v2[j].se) < mi){mi = abs(v1[i].fi-v2[j].fi)+abs(v1[i].se-v2[j].se);}
			if(mi == 1){cout << 2 << endl; return 0;}
		}
	}
	
	cout << 1+mi << endl;
}
