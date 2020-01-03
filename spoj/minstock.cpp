#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
typedef long long ll;

priority_queue<pair <ll, string> > pq;
map <string, ll> m;

ll n,a,harga;
string s;

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a;
		if(a == 1){
			cin >> s; cin >> harga;
			pq.push(mp(-harga,s));
			m[s] = harga;
		}
		else if(a == 2){
			cin >> s; cin >> harga;
			pq.push(mp(-harga,s));
			m[s] = harga;
		}
		else if(a == 3){
			cin >> s;
			while(!pq.empty()&&(m[pq.top().se]!=-pq.top().fi))pq.pop();
			if(!pq.empty()){cout << pq.top().se << " " << i << endl; pq.pop();}
		}
	}
}
