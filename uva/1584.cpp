#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll l,n;
string s;
int main(){

	cin >> n;
	while(n--){
		
		cin >> s;
		l = s.length();
		
		ll pos = 0;
		for(int i = 1; i < l; i++){
			if(s[pos]>=s[i]){
				ll tmp = i;
				ll a = 0;
				while(a<l){
					ll pp = pos+a-l*((pos+a)>=l);
					ll tt = tmp+a-l*((tmp+a)>=l);
					if(s[pp]>s[tt]){
						pos = tmp;
						break;
					}
					else if(s[pp]<s[tt])break;
					a++;
				}
			}
		}
		for(int i = 0; i < l; i++){
			ll now = pos+i-l*((pos+i)>=l);
			cout << s[now];
		}cout << endl;
	}
	return 0;
}
