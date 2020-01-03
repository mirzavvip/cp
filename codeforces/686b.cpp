#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n, arr[200];
string s;
int main(){

	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= n-i; j++){
			if(arr[j]>arr[j+1]){
			cout << j << " " << j+1 << endl;
			swap(arr[j],arr[j+1]);
			}
		}
	}

	return 0;
}
