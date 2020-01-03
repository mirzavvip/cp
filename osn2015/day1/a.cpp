#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second

using namespace std;

int sd, td, ls, lt, n, s[101010], t[101010];
vector <int> v;
bool bb = true;
bool de[101010];

int main(){
	string b;
	cin >> b;
	cin >> sd >> td >> ls >> lt >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> s[i] >> t[i];
	}
	while(bb){
		if(s[1]-td*((sd/t[1])+(sd%t[1]!=0)) <= 0)break;	
		bb = false;
		for(int i = 2; i <= n; i++){
			if(!de[i] && (s[i]-td*((sd/t[i])+(sd%t[i]!=0))) <= 0){
				bb = 1;
				de[i] = 1;
				sd+=ls;
				td+=lt;
				v.pb(i);
				i = n+1;
			}
		}
	}
	
	int l = v.size();
	
	if(!bb){cout << -1 << endl; return 0;}
	
	cout << l << endl;
	
	for(int i = 0; i < l; i++){
		cout << v[i] << endl;
	}
	return 0;
}
