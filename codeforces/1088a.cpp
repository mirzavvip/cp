#include <bits/stdc++.h>

using namespace std;

int a, b, x;

int main(){
	cin >> x;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= x; j++){
			if(i%j == 0 && i*j > x && (i < x*j)){
				cout << i << " " << j << endl;
				return 0;
			}
		}
	}
	cout << -1 << endl;
}
