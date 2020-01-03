#include <bits/stdc++.h>

using namespace std;

int n, arr[110000],q,ans,tmp;

int main(){
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	sort(arr,arr+n);
	
	cin >> q;
	
	while(q--){
		cin >> tmp;
		ans = upper_bound(arr,arr+n,tmp)-arr;
		cout << ans << endl;
	}
}
