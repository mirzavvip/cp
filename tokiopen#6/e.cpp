#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9+7;

ll dp[101][31000],n,l,c[101010];
int main(){
	cin >> n >> l;
	
	dp[0][0] = 1;
	
	for(int i = 1; i <= n; i++){
		cin >> c[i];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			//cout << dp[i][j] << " ";
			dp[i+1][j+1]=(dp[i+1][j+1]+dp[i][j])%MOD;
			if((j+2*c[i+1])<=l)dp[i+1][j+2*c[i+1]]=(dp[i+1][j+2*c[i+1]]-dp[i][j]+MOD)%MOD;
		}
		for(int j = 1; j <= l; j++){
			dp[i+1][j] = (dp[i+1][j]+dp[i+1][j-1])%MOD;
		}
		//cout<<"\n";
	}
	
	cout << dp[n][l] << endl;
}
