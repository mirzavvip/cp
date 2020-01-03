#include <bits/stdc++.h>

using namespace std;

int arr[101010], n, mak, a, bbb, c, d, ans[110010];
bool b[101010], bb[1010][1010];

int main(){
	string s;
	cin >> s;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			if(b[arr[j]]==0){
				b[arr[j]] = 1;
				ans[i] = j-i+1;				
			}else if(b[arr[j]] == 1){
				j=n+1;
			}
		}
		memset(b, 0, sizeof(b));
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			int jar = min(ans[i],ans[j]);
			if((i+jar-1) < j && jar > mak){
				mak = jar;
				a = i;
				bbb = i+jar-1;
				c = j;
				d = j+jar-1;
			}
		}
	}
	
	cout << a << " " <<  bbb << " " << c << " " << d << endl;
	
