#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mo[4],x,y,posx,posy,posxx,posyy,tots,l;
char arr[53][53];
bool b;
string s;

int main(){
	mo[0] = 0;
	mo[1] = 1;
	mo[2] = 2;
	mo[3] = 3;
	
	cin >> x >> y;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cin >> arr[i][j];
			if(arr[i][j]=='S'){posx = i; posy = j;}
		}
	}
	
	cin >> s;
	l = s.length();
	
	do{
		posxx = posx;
		posyy = posy;
		b = true;
		for(int i = 0; i < l; i++){
			if(s[i]-'0' == mo[0]){posxx--;}
			else if(s[i]-'0' == mo[1]){posxx++;}
			else if(s[i]-'0' == mo[2]){posyy--;}
			else if(s[i]-'0' == mo[3]){posyy++;}
			
			if(posxx >= x || posxx < 0 || posyy >= y || posyy < 0){b = false; i = l+1;}
			else if(arr[posxx][posyy] == '#'){b = false; i = l+1;}
			else if(arr[posxx][posyy] == 'E'){i = l+1;}
		}
		if(!(arr[posxx][posyy]=='E'))b=false;
		tots+=b;
		//if(b){for(int i = 0; i < 4; i++){cout << mo[i] << " ";}cout << endl;}
	}while(next_permutation(mo, mo+4));
	
	cout << tots << endl;
}
