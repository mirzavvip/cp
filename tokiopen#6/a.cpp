#include <bits/stdc++.h>

using namespace std;

int a, b, c, d, x, y, n;

int main(){
	cin >> n >> x >> y;
	for(int a = 0; a <= n; a++){
		for(int b = 0; a+b <= n; b++){
			for(int c = 0; a+b+c <= n; c++){
				for(int d = 0; a+b+c+d <= n; d++){
					if((a+b+c+d)==n && (a-c)==y && (b-d) == x){
						cout << a << " " << b << " " << c << " " << d <<endl;
						return 0;
					}
				}
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
