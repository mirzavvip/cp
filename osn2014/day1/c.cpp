#include <bits/stdc++.h>
#define pb push_back

using namespace std;

string s;
int n, q, arr[1100000],ans,a, b;
char c[1100000];
vector<char> v;

int main(){
	v.pb('a');
	cin >> s;
	cin >> n >> q;
	
	for(int i = 1; i <= n; i++){
		cin >> c[i];
	}
	
	for(int i = 1; i <= n; i++){
		if(c[i]!=c[i-1]){arr[i] = arr[i-1]+1;v.pb(c[i]);}
		else arr[i] = arr[i-1];
	}
	
	while(q--){
		cin >> a >> b;
		b = arr[b];
		a = arr[a];
		ans = b-a+1;
		cout << ans;
		
		if(ans<10){
			cout << " ";
			for(int i = a; i <= b; i++){
				cout << v[i];
			}
		}
			cout << endl;
	}
}
