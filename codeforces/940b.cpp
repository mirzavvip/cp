#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, k, a, b, to, in, po, pem;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n >> k >> a >> b;
	
	if(k == 1){
		cout << (n-1)*a << endl;
		return 0;
	}
	
	while(n>1){
		if(n%k == 0){
			pem = (n-(n/k))*a;
			if(b < pem){
				n/=k;to+=b;
			}
			else{
				to+=(n-1)*a;
				n = 1;
			}
		}
		else if(n > k){
			to+=(n%k)*a;
			n-=(n%k);
		}else{
			to+=(n-1)*a;
			n=1;
		}
	}
	
	cout << to << endl;
}
