#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a,i,tmp;

bool b, fnd;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while(cin >> a && a!=0){
		queue<int>q;
		stack<int>st;
		for(i = 0; i < a; i++){
			cin >> tmp;
			q.push(tmp);
		}
		b = true;
		for(i  = 1; i <= a; i++){
			fnd=false;
			while(!fnd){
				if(!q.empty()){
					if(q.front()==i){q.pop();fnd=true;}
				}
				if(!st.empty()){
					if(st.top()==i){st.pop();fnd=true;}
				}
				if(!fnd && !q.empty()){st.push(q.front());q.pop();}
				else if(!fnd && q.empty()){fnd=true;i=a+1;b=false;}
			}
		}
		if(b)cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
