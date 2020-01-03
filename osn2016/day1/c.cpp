#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll x,n,m,k,tots;

string s;
int main(){
	cin >> s;
	cin >> n >> m >> k;
	cin >> s;
	ll a = 1;
	for(int i = 0; i < m; i++){
	if(s[i]=='1')x+=a;
	a*=2;
	}
	
	if(n==1){
		for(int i = 0; i < a; i++){
			ll c = x^i;
			if(__builtin_popcount(c)==k)tots++;
		}
	}
	
	if(n == 2){
		for(int i = 0; i < a; i++){
			for(int j = 0; j < a; j++){
				ll c = x^i;
				c = c^j;
				if(__builtin_popcount(c)==k)tots++;
			}
		}
	}
	
	if(n == 3){
		for(int i = 0; i < a; i++){
			for(int j = 0; j < a; j++){
					for(int g = 0; g < a; g++){
					ll c = x^i;
					c = c^j;
					c = c^g;
					if(__builtin_popcount(c)==k)tots++;
				}
			}
		}
	}
		
	cout << tots << endl;
}
