#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
string s;
long long tmp, ans, n, m, a = 0, b=1, c, maks, l, to, in;
const long long MA = 1e9;
vector <ll> v;

int main(){
	cin >> n;
	b=1;
	while(a<=MA){
		v.push_back(a);
		//cout << a << " ";
		c=a;
		a+=b;
		b=c;
	}//cout << endl;
	
	l = v.size();
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < l; j++){
			for(int k = 0; k < l; k++){
				if(v[i]+v[j]+v[k] == n){
					cout << v[i] << " " << v[j] << " " << v[k] << endl;
					return 0;
				}
			}
		}
	}
	cout << "I'm too stupid to solve this problem" << endl;
}
