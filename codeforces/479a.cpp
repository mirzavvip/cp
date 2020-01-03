#include <bits/stdc++.h>

using namespace std;
string s;
long long tmp, ans, n, m, a, b, c, maks;


int main(){
	cin >> a >> b >> c;
	if((a+b+c) > maks)maks = a+b+c;
	if(a*b*c > maks)maks = a*b*c;
	if((a+b)*c > maks)maks = (a+b)*c;
	if(a*(b+c) > maks)maks = a*(b+c);
	if(a+b*c > maks)maks = a+b*c;
	if(a*b+c > maks)maks = a*b+c;
	
	cout << maks << endl;
}
