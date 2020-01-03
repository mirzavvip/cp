#include <bits/stdc++.h>
using namespace std;

int arr[110][110],n,m,c,to,a,b,q,r[110][110];

int cariset(int aa, int bb){
	if(arr[bb][aa] == aa)return aa;
	else{
	arr[bb][aa] = cariset(arr[bb][aa],bb);
	}
	return arr[bb][aa];
}

void konek(int aa, int bb, int cc){
	int aroot = cariset(aa,cc);
	int broot = cariset(bb,cc);
	if(r[cc][aroot] < r[cc][broot]){arr[cc][aroot] = broot;}
	else if(r[cc][broot] < r[cc][aroot]){arr[cc][broot] = aroot;}
	else {arr[cc][aroot] = broot; r[cc][broot]++;}
}

bool iskonek(int aa, int bb, int cc){
	return (cariset(aa,cc) == cariset(bb,cc));
}

int main(){
	cin >> n >> m;
	
	for(int i = 0; i < 110; i++){
		for(int j = 0; j < 110; j++){
			r[i][j]=1;
			arr[i][j] = j;
		}
	}
	
	for(int i = 1; i <= m; i++){
		cin >> a >> b >> c;
		konek(a,b,c);
	}
	
	cin >> q;
	
	while(q--){
		cin >> a >>b;
		to = 0;
		for(int i = 1; i <= m; i++){
			if(iskonek(a,b,i))to++;
		}
		cout << to << endl;
	}
}
