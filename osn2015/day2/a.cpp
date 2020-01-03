#include <bits/stdc++.h>

using namespace std;

int m, n, k, arr[1010][1010], mimi[1010],qq,bb[1010][1010];
int b[1010];

int main(){
	string s;
	cin >> s;
	cin >> m >> n >> k;
	
	for(int i = 1; i <= n; i++){
		cin >> arr[0][i] >> b[i];
	}
	
	for(int i = 1; i <= 1000; i++){
		for(int j = 1; j <= n; j++){
			arr[i][j] = arr[i-1][j]+b[j];
			if(arr[i][j] > m)arr[i][j]=1;
			else if(arr[i][j] < 1)arr[i][j] = m;
			bb[i][arr[i][j]]++;
		}
		int sta;
		int now = 1;
		int mi = 1e5;
		while(bb[i][now]==0)now++;
		sta=now;
		int ja=1;
		do{
			now++;
			if(now>m)now=1;
			if(bb[i][now]>1)mi=0;
			if(bb[i][now]==0)ja++;
			if(bb[i][now]==1){mi=min(ja,mi);ja=1;}
		}while(now!=sta);
		mimi[i] = mi;
	}
	
	while(k--){
		cin >> qq;
		cout << mimi[qq] << endl;
	}
}
