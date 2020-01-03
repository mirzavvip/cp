#include <bits/stdc++.h>

using namespace std;

int n, k, tmp, a, b, c, arr[101010];
string s;

int main(){
	cin >> s;
	cin >> n;
	
	if(n == 3){
		cin >> a >> b;
		cout << "PASS" << endl;
		cin >> s;
		if(s == "SERI"){
			arr[a] = 1;
			arr[b] = 1;
		}else{
			tmp = stoi(s);
				cin >> s;
				if(tmp == a){
					arr[a] = 2;
					arr[b] = 1;
				}else{
					arr[a] = 1;
					arr[b] = 2;
				}
		}
		cin >> a >> b;
		cout << "PASS" << endl;
		cin >> s;
		if(s == "SERI"){
			if(!arr[a])arr[a] = arr[b];
			else arr[b] = arr[a];
		}else{
			tmp = stoi(s);
			cin >> s;
			if(tmp == a){
				if(!arr[a]){
					if(arr[b] == 1)arr[a] = 2;
					else if(arr[b] == 2)arr[a] = 3;
					else if(arr[b] == 3)arr[a] = 1;
				}else{
					if(arr[a] == 1)arr[b] = 3;
					else if(arr[a] == 2)arr[b] = 1;
					else if(arr[a] == 3)arr[b] = 2;
				}
			}else{
				if(!arr[a]){
					if(arr[b] == 1)arr[a] = 3;
					else if(arr[b] == 2)arr[a] = 1;
					else if(arr[b] == 3)arr[a] = 2;
				}else{
					if(arr[a] == 1)arr[b] = 2;
					else if(arr[a] == 2)arr[b] = 3;
					else if(arr[a] == 3)arr[b] = 1;
				}
			}
		}
		cin >> a >> b;
		if(arr[a] == arr[b])cout << "SERI" << endl;
		else if(arr[a] == 1 && arr[b] == 2)cout << b << " MENANG" << endl;
		else if(arr[a] == 2 && arr[b] == 3)cout << b << " MENANG" << endl;
		else if(arr[a] == 3 && arr[b] == 1)cout << b << " MENANG" << endl;
		else if(arr[a] == 2 && arr[b] == 1)cout << a << " MENANG" << endl;
		else if(arr[a] == 3 && arr[b] == 2)cout << a << " MENANG" << endl;
		else if(arr[a] == 1 && arr[b] == 3)cout << a << " MENANG" << endl;
	}
	
	else{
	arr[1] = 1;
	for(int i = 1; i <= (n*(n-1)/2); i++){
		cin >> a >> b;
		if(arr[a] && arr[b]){
			if(arr[a] == arr[b])cout << "SERI" << endl;
			else if(arr[a] == 1 && arr[b] == 2)cout << b << " MENANG" << endl;
			else if(arr[a] == 2 && arr[b] == 3)cout << b << " MENANG" << endl;
			else if(arr[a] == 3 && arr[b] == 1)cout << b << " MENANG" << endl;
			else if(arr[a] == 2 && arr[b] == 1)cout << a << " MENANG" << endl;
			else if(arr[a] == 3 && arr[b] == 2)cout << a << " MENANG" << endl;
			else if(arr[a] == 1 && arr[b] == 3)cout << a << " MENANG" << endl;
		}else{
			cout << "PASS" << endl;
				cin >> s;
			if(s == "SERI"){
					arr[b] = arr[a];
			}else{
				tmp = stoi(s);
				cin >> s;
				if(tmp == b){
					if(arr[a] == 1)arr[b] = 2;
					else if(arr[a] == 2)arr[b] =3;
					else if(arr[a] == 3)arr[b] = 1;
				}else{
					if(arr[a] == 1)arr[b] = 3;
					else if(arr[a] == 2)arr[b] =1;
					else if(arr[a] == 3)arr[b] = 2;
				}
			}
		}
	}}
}
