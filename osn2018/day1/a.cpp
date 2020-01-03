#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


ll arr[101010], a[101010], b[101010], h[101010], n, k, hasil;
string s;


int main(){
	cin >> s;
	
	cin >> n >> k;
	
	for(int i = 1; i <= k; i++){
	cin >> h[i];
	}
	
	for(int i = 1; i <= n; i++){
	cin >> a[i];
	}
	
	for(int i = 1; i <= n; i++){
	cin >> b[i];
	}
	
	if(k==1){
		if(n%2==1){
		if(h[1]==(n/2+1)){
		hasil = n;
		for(int i = 1; i <= n/2; i++){hasil=(hasil*i)%1000000007;hasil=(hasil*i)%1000000007;}
		}
		}
		else if (h[1]==(n/2)||h[1]==(n/2+1)){
		hasil = 1;
		for(int i = 1; i <= n/2; i++){hasil=(hasil*i)%1000000007;hasil=(hasil*i)%1000000007;}
		}
	}
	
	else{
	for(int i = 1; i <= n; i++)arr[i] = i;
	do{
	bool bb = true;
	for(int i = 1; i <= n; i++){
	if(!(a[i]==b[arr[i]])){bb=false;break;}
	if(i>h[a[i]]){if(!(arr[i]<=h[a[i]])){bb=false;break;}}
	if(i<h[a[i]]){if(!(arr[i]>=h[a[i]])){bb=false;break;}}
	}
	if(bb)hasil++;
	}while(next_permutation(arr+1,arr+n+1));
	}
	
	cout << hasil << endl;
}
