#include<bits/stdc++.h>

using namespace std;

long long n, satu[200000],tiga[200000],hasil;
string ga, s;

int main(){
	cin >> ga;
	cin >> n;
	cin >> s;
	
	satu[0] == 0;
	tiga[0] == 0;
	
	for(int i = 1; i <= n; i++){
		satu[i] = satu[i-1];
		tiga[i] = tiga[i-1];
		
		if(s[i-1]=='1')satu[i]++;
		if(s[i-1]=='3')tiga[i]++;
	}
	
	
	for(int i = 1; i <= n; i++){
		if(s[i-1]=='2'){
			hasil+=satu[i-1]*(tiga[n]-tiga[i-1]);
		}
	}
	
	cout << hasil << endl;
}
