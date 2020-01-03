#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n,m,q,arr[1010][1010], in, l[1010][1010], r[1010][1010], a, b, c, d;

void floodl(ll i, ll j, ll in){
	l[i][j] = in;
	if(j < m && arr[i][j]>arr[i][j+1]){
		floodl(i,j+1,in);
	}
	if(i < n && arr[i][j]>arr[i+1][j]){
		floodl(i+1,j,in);
	}
}

void floodr(ll i, ll j, ll in){
	r[i][j] = in;
	if(i > 1 && arr[i][j]>arr[i-1][j]){
		floodr(i-1,j,in);
	}
	if(j > 1 && arr[i][j]>arr[i][j-1]){
		floodr(i,j-1,in);
	}
}

int main(){
	string s;
	cin >> s;
	
	cin >> n >> m >>  q;
	
	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= m; j++){
			cin >> arr[i][j];
		}
	}
	
	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= m; j++){
			if(l[i][j] == 0){
				floodl(i,j,in);
				in++;
			}
		}
	}
	
	for(ll i = n; i >= 1; i--){
		for(ll j = m; j >= 1; j--){
			if(r[i][j] == 0){
				floodr(i,j,in);
				in++;
			}
		}
	}
	
	/*for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cout << r[i][j] << " ";
		}cout << endl;
	}*/
	
	while(q--){
		cin >> a >> b >> c >> d;
		if(l[a][b] == l[c][d]){cout << "Kiri Atas" << endl;}
		else if(r[a][b] == r[c][d]){cout << "Kanan Bawah" << endl;}
		else cout << "Tidak Mungkin" << endl;
	}
}	
