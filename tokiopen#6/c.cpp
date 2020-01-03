#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, m, er, ans;
string s;

int main(){
	cin >> n >> m;
	cin >> s;
	
	for(int i = 1; i <= n; i+=2){
		if(s[i-1]=='0'){
			ans++;
			er++;
		}
	}
	
	for(int i = 1; i<= n; i+=2){
		if(s[i-1]=='1'){
			ans++;
		}
	}
	
	for(int i = 2; i <= n; i+=2){
		if(s[i-1] == '1'){
			ans++;
		}
	}
	
	
	for(int i = 0; i < er; i++){
		ans++;
	}
	
	cout << ans << endl;
	
	for(int i = 1; i <= n; i+=2){
		if(s[i-1] == '0'){
			cout << 1 << " " << i << endl;
		}
	}
	
	for(int i = 1; i<= n; i+=2){
		if(s[i-1] == '1'){
			cout << 1 << " " << i << endl;
		}
	}
	
	for(int i = 2; i <= n; i+=2){
		if(s[i-1] == '1'){
			cout << 1 << " " << i << endl;
		}
	}
	
	
	for(int i = 0; i < er; i++){
		cout << 2 << endl;
	}
}
