#include <bits/stdc++.h>

using namespace std;

string c[53] = {"", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "Aa", "Bb", "Cc", "Dd", "Ee", "Ff", "Gg", "Hh", "Ii", "Jj", "Kk", "Ll", "Mm", "Nn", "Oo", "Pp", "Qq", "Rr", "Ss", "Tt", "Uu", "Vv", "Ww", "Xx", "Yy", "Zz"};;
int n, k;
string s;

int main(){
	cin >> n >> k;
	string cc[n+1];
	
	for(int i = 1; i <= k; i++){
		cc[i]=c[i];
	}
	
	string tmp = cc[k];
	int in = 1;
	
	for(int i = k; i <= n; i++){
		cin >> s;
		if(s == "NO"){
			cc[i] = cc[in];
			if(tmp == ""){tmp = cc[in-1];}
		}
		else if(s == "YES"){
			if(tmp != ""){cc[i]=tmp;tmp="";}
			else cc[i] = cc[in-1];
		}
		in++;
	}
	for(int i = 1; i <= n; i++){
		cout << cc[i];
		if(i < n)cout << " ";
	}cout << '\n';
}
