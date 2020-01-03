#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n,k;
string s;

ll cari(){
	ll l,r,mid;
	l = 1;
	r = n;
	while(l<r){
		mid = (l+r-1)/2;
		cout << mid-l+1 << " ";
		for(int i = l; i <= mid; i++){
			cout << i;
			if(i!=mid)cout << " ";
		}cout << endl;
		cin >> s;
		if(s == "YA"){r = mid;}
		else if(s == "BISAJADI"){return mid+1;}
		else {l = mid+2;}
	}return r;
}

void cari3(){
	cout << "3 1 2 5" << endl;
	cin >> s;
	if(s == "YA"){
		cout << "1 1" << endl;
		cin >> s;
		if(s == "YA")cout << "0 1" << endl;
		else if(s == "BISAJADI")cout << "0 2" << endl;
		else if(s == "TIDAK")cout << "0 5" << endl;
	}else if(s == "BISAJADI"){
		cout << "1 3" << endl;
		cin >> s;
		if(s == "YA")cout << "0 3" << endl;
		else if(s == "BISAJADI")cout << "0 4" << endl;
		else if(s == "TIDAK")cout << "0 6" << endl;
	}else if(s == "TIDAK"){
		cout << "1 7" << endl;
		cin >> s;
		if(s == "YA")cout << "0 7" << endl;
		else if(s == "BISAJADI")cout << "0 8" << endl;
		else if(s == "TIDAK")cout << "0 9" << endl;
	}
}

int main(){
	cin >> s;
	cin >> n >> k;
	
	if(n == 9 && k == 2)cari3();
	else cout << "0 " << cari() << endl;
}
