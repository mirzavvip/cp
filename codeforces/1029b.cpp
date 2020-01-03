#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a, b, n, maks, pa;

int main(){
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> b;
		if(b<=2*a){
		pa++;
		}
		else{
		pa=0;
		}
		maks = max(pa+1,maks);
		//cout << pa << " ";
		a = b;
	}
	
	cout << maks << endl;
}
