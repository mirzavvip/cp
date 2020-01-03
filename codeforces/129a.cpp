#include <bits/stdc++.h>

using namespace std;
string s;
long long tmp, ans, n, m, a, b, c, maks, l, to;


int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		to+=tmp;
		to%=2;
		a+=(tmp%2==1);
		b+=(tmp%2==0);
	}
	cout << (to == 1 ? a : b) << endl;
}
