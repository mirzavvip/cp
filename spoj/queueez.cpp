#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

queue<ll> q;
ll a,b,t;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while(t--){
	cin >> a;
		if(a==1){
			cin >> b;
			q.push(b);
		}else if(a==2){
			if(!q.empty())q.pop();
		}else if(a==3){
			if(q.empty())cout<<"Empty!"<<endl;
			else cout << q.front() << endl;
		}
	}
	return 0;
}
