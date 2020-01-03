#include <bits/stdc++.h>

using namespace std;

string s;
string ja;
int n,k, x;
bool bb, bbb;
map<char,bool> b;

int main(){
	cin >> ja;
	cin >> n >> k;
	
	s = 'A';
	
	for(int i = 1; i <= 26; i++){
		bb = 0;
		for(char c = 'B'; c <= 'Z'; c++){
			if(b[c]==1)continue;
				if(bbb)cout << "TANYA " << c << s << endl;
				else cout << "TANYA " << s << c << endl;
				cin >> ja;
				if(ja == "YA"){
					if(bbb){
						string tmp = s;
						s = "";
						s+=c;
						s+=tmp;
					}
					else{
						s+=c;
					}
					b[c]=1;
					c = 'z'+1;
					bb = 1;
				}
		}
			if(bb == 0)bbb=1;
		}
		
		cout << "JAWAB " << s << endl;
		return 0;
}
