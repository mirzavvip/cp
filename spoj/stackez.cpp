#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

stack<ll> st;
ll a,b,t;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while(t--){
	cin >> a;
		if(a==1){
			cin >> b;
			st.push(b);
		}else if(a==2){
			if(!st.empty())st.pop();
		}else if(a==3){
			if(st.empty())cout<<"Empty!"<<endl;
			else cout << st.top() << endl;
		}
	}
	return 0;
}
