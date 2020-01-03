#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n,k,mi,now,pos,arr[200100];
int main(){

	cin >> n >> k;
	for(int i = 0; i < n; i++){
	cin >> arr[i];
	}
	
	for(int i = 0; i < k; i++){
	now += arr[i];
	}mi = now; pos = 1;
	
	for(int i = k; i < n; i++){
	now-=arr[i-k];now+=arr[i];
	if(now<mi){mi=now;pos=i-k+2;}
	}
	cout << pos << endl;
	return 0;
}
