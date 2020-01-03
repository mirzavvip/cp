#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n,q,arr[101010],aa,bb,ans,po,a,b;

int main(){
	po = 1;
	cin >> n >> q;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < 30; i++){
		a = 0;
		b = 0;
		for(int j = 0; j < n; j++){
			if(arr[j]%2==0)a++;
			else b++;
			arr[j]/=2;
		}
		for(int j = 0; j < q; j++){
			aa=(a*a+b*b)%1000000007;
			bb=(2*a*b)%1000000007;
			a = aa;
			b = bb;
		}
		ans+=b*po;
		ans%=1000000007;
		po*=2;
	}
	
	cout << ans << endl;
}
