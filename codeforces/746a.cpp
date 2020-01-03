#include <bits/stdc++.h>

using namespace std;
string s;
long long l, ans, k, n, w, t,a,b,c;


int main(){
	cin >> a >> b >> c;
	
	for(int i = 1; i <= 1000; i++){
		if(a >= i && b >= i*2 && c >= i*4){
			ans = i + i*2 + i*4;
		}
	}
	cout << ans << endl;
}
