#include <bits/stdc++.h>

using namespace std;

int tmp, n, k, to, tt, ttt;
int arr[10101];
vector<int>v;
vector<int>r;
bool b[10101];
bool pororo;

void buatset(int i){
	v.push_back(i);
	r.push_back(1);
}

int cariset(int i){
	if(v[i]!=i){
	v[i] = cariset(v[i]);
	}
	return v[i];
}

void konek(int a, int b){
	int aroot = cariset(a);
	int broot = cariset(b);
	
	if(r[aroot] > r[broot])v[broot] = aroot;
	else if(r[broot] > r[aroot])v[aroot] = broot;
	else {v[broot] = aroot; r[aroot]++;}
}

bool iskonek(int a, int b){
	a = cariset(a);
	b = cariset(b);
	return a==b;
}

int main(){
	v.push_back(0); r.push_back(0); to = 0;
	cin >> n >> k;
	
	for(int i = 1; i <= k; i++){
		buatset(i);
	}
	
	for(int i = 1; i <= n; i++){
		cin >> tmp;
		if(tmp){cin >> tt; arr[i] = tt;}
		//cout << arr[i] << endl;
		for(int j = 1; j < tmp; j++){
			cin >> ttt;
			konek(tt,ttt);
		}
	}

	for(int i = 1; i <= n; i++){
		if(!arr[i]){to++;continue;}
		tmp = cariset(arr[i]);
		pororo = true;
		//cout << tmp << endl;
		if(!b[tmp]){
			to++;
			b[tmp] = 1;
		}
	}
	cout << to-pororo << endl;
}
