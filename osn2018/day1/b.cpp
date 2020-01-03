#include <bits/stdc++.h>

using namespace std;

string ss[2500][2500];
int a, b, aa, bb, x, xx, q, l;

void dp(string s, int a, int b){
	if(a > aa || b > bb)return;
	int l = s.length();
	if(l > 50)return;
	if(ss[a][b] == "" || ss[a][b] > s)ss[a][b] = s;
	dp(s+'0', a, b+a);
	dp(s+'1', a+1+b, b);
}

int main(){
	//freopen("apa.txt", "w", stdout);
	string tmp;
	cin >> tmp;
	cin >> aa >> bb >> q;
	dp("1", 1, 0);
	//fclose(stdout);
	if(ss[aa][bb]==""){cout << "TIDAK MUNGKIN" << endl; return 0;}
	cout << "MUNGKIN" << endl;
	while(q--){
		cin >> x >> xx;
		l = ss[aa][bb].length();
		if(xx>=l)cout << "DI LUAR BATAS" << endl;
		else{
		for(int i = x; i <= xx; i++){
			cout << ss[aa][bb][i];
		}cout << endl;}
	}
}
