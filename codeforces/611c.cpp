#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll n,m,p[550][550], p2[550][550],to, q, x, xx, y, yy;
char arr[550][550];
int main(){
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 2; j <= m; j++){
			p[i][j]+=(arr[i][j] == '.' && arr[i][j-1] == '.');
		}
	}
	
	for(int i = 1; i <= m; i++){
		for(int j = 2; j <= n; j++){
			p2[j][i] += (arr[j][i] == '.' && arr[j-1][i] == '.');
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			p[i][j]+=p[i-1][j];
			p[i][j]+=p[i][j-1];
			p[i][j]-=p[i-1][j-1];
			p2[i][j]+=p2[i-1][j];
			p2[i][j]+=p2[i][j-1];
			p2[i][j]-=p2[i-1][j-1];
		}
	}
	
	cin >> q;
	while(q--){
		cin >> x >> y >> xx >> yy;
		to = p[xx][yy] + p2[xx][yy];
		to -= p[xx][y]; // kiri bawah
		to -= p[x-1][yy]; // kanan atas
		to += p[x-1][y]; // kiri atas
		
		to-=p2[xx][y-1]; // kiri bawah
		to-=p2[x][yy]; // kanan atas
		to+= p2[x][y-1]; // kiri atas
		cout << to << endl;
	}
}
