#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

stack<ll> s;

ll tots = 1,x,tmp,n,j;
string b;
const ll ma = 4294967295;

int main(){
	cin >> n;
	while(n--){
		cin >> b;
		if(b=="for"){
			cin >> tmp;
			s.push(tmp);
			if((j>0)||((tots*tmp)>ma)){j++;}
			else tots*=tmp;
		}
		if(b=="end"){
			if(j==0){tots/=s.top();s.pop();}
			if(j){s.pop();j--;}
		}
		if(b=="add"){
			if(j){cout << "OVERFLOW!!!" << endl; return 0;}
			x+=tots;
			if(x>ma){cout << "OVERFLOW!!!" << endl; return 0;}
		}
	}
	
	cout << x << endl;
}
