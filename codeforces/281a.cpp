#include <bits/stdc++.h>

using namespace std;
string s;
char a[10101];
int l;


int main(){
	cin >> s;
	
	l = s.length();
	if(s[0]>='a')a[0]=s[0]+('A'-'a');
	else a[0] = s[0];
	
	for(int i = 1; i < l; i++){
		a[i] = s[i];
	}
		
	for(int i = 0; i < l; i++){
		cout << a[i];
	}cout << endl;
}
