#include <bits/stdc++.h>

using namespace std;

int arr[100], n, k, sor[100];
int mi = 1e9;

void bf(int a[], int dep, int ju){
	if(dep == k){
		bool ya = 1;
		for(int i = 1; i <= n; i++){
			if(a[i] != sor[i]){ya = 0; break;}
		}
		if(ya && ju < mi)mi = ju;
	}
	else{
		for(int i = 1; i <= n; i++){
			for(int j = i; j <= n; j++){
				int b[n+1];
				for(int x = 1; x <= n; x++){
					b[x] = a[x];
				}
				sort(b+i,b+j+1);
				bf(b,dep+1,ju+j-i+1);
			}
		}
	}
}

int main(){	
	string s;
	cin >> s;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
		sor[i] = arr[i];
	}
	
	sort(sor+1,sor+n+1);
	
	bf(arr, 0, 0);
	
	cout << mi << endl;
}
