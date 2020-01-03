#include <bits/stdc++.h>

using namespace std;

bool b[3],bb[201][201][201];
int bgr[10],n,l;
string s;

void ko(){
	if(bb[bgr[0]][bgr[1]][bgr[2]])return;
	bb[bgr[0]][bgr[1]][bgr[2]] = true;
	if(!bgr[0] && !bgr[1])b[2] =1;
	else if(!bgr[1] && !bgr[2])b[0] =1;
	else if(!bgr[0] && !bgr[2])b[1] =1;
	else{
		if(bgr[0] && bgr[1]){
			bgr[0]--;bgr[1]--;bgr[2]++;
			ko();
			bgr[0]++;bgr[1]++;bgr[2]--;
		}
		if(bgr[1] && bgr[2]){
			bgr[1]--;bgr[2]--;bgr[0]++;
			ko();
			bgr[1]++;bgr[2]++;bgr[0]--;
		}
		if(bgr[0] && bgr[2]){
			bgr[0]--;bgr[2]--;bgr[1]++;
			ko();
			bgr[0]++;bgr[2]++;bgr[1]--;
		}
		if(bgr[0]>=2){
			bgr[0]--;
			ko();
			bgr[0]++;
		}
		if(bgr[1]>=2){
			bgr[1]--;
			ko();
			bgr[1]++;
		}
		if(bgr[2]>=2){
			bgr[2]--;
			ko();
			bgr[2]++;
		}
	}
}

int main(){
	cin >> n;
	cin >> s;
	
	l = s.length();
	
	for(int i = 0; i < l; i++){
		if(s[i]=='B')bgr[0]++;
		else if(s[i] == 'G')bgr[1]++;
		else if(s[i] == 'R')bgr[2]++;
	}
	
	ko();
	
	if(b[0])cout << "B";
	if(b[1])cout << "G";
	if(b[2])cout << "R";
	cout << endl;
}
