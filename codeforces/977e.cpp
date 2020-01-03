#include <bits/stdc++.h>

using namespace std;

int n,k,a,b,arr[1010100],to, ed[1010100], r[1010100];
bool bo[1010100];

int cariset(int i){
	if(arr[i] == i)return i;
	else{arr[i] = cariset(arr[i]);}
	return arr[i];
}

void konek(int aa, int bb){
	int aroot = cariset(aa);
	int broot = cariset(bb);
	if(r[aroot] < r[broot])arr[aroot] = broot;
	else if(r[broot] < r[aroot])arr[broot] = aroot;
	else {arr[aroot] = broot; r[broot]++;}
}

int main(){
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++){arr[i] = i; r[i] = 1;}

	for(int i = 1; i <= k; i++){
		cin >> a >> b;
		ed[a]++;
		ed[b]++;
		konek(a,b);
	}
	
	for(int i = 1; i <= n; i++){
		bo[cariset(i)] = 1;
	}	
	
	for(int i = 1; i <= n; i++){
		if(ed[i]!=2){
		bo[cariset(i)] = 0;
		}
	}
	
	for(int i = 1; i <= n; i++){
		to+=bo[i];
	}
	cout << to << endl;
}
