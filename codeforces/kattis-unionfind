#include <bits/stdc++.h>

using namespace std;

int n, q, aa ,bb, arr[1500000];
char c;

int cariset(int a){
	if(arr[a] == a)return a;
	else{
	arr[a] = cariset(arr[a]);
	return arr[a];
	}
}

void konek(int a, int b){
	int aroot = cariset(a);
	int broot = cariset(b);
	if(aroot == broot)return;
	else {
		arr[aroot] = broot;
	}
}

bool iskonek(int a, int b){
	return (cariset(a) == cariset(b));
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n >> q;
	
	for(int i = 0; i <= n; i++){
		arr[i]=i;
	}
	
	while(q--){
		cin >> c >> aa >> bb;
		if(c == '?'){
			cout << (iskonek(aa,bb)?"yes":"no") << '\n';
		}
		else if(c == '='){
			konek(aa,bb);
		}
	}
}
