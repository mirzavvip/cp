#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, mi, ma, mimi, mama, tmp;

int main(){
	cin >> n;
	mi = 1e15;
	for(int i = 1; i <= n; i++){
		cin >> tmp;
		if(tmp<mi){
			mi = tmp;
			mimi=1;
		}else if(tmp==mi)mimi++;
		if(tmp>ma){
			ma = tmp;
			mama=1;
		}else if(tmp==ma)mama++;
	}
	
	cout << max((ll)0,n- mimi- mama) << endl;
}
