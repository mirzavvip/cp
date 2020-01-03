#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define pb push_back
#define mp make_pair
int r,c,ju,arr[1002][1002], awx,awy, tujx, tujy,tmp, fi, se;
char cah[1002][1002];
vector<int>v[1010];
bool b[1002][1002];

string s;

void ffil(int i, int j){
	queue <pair <int, int> > q;
	q.push(mp(i,j));
	arr[i][j] = ju;
	
	while(!q.empty()){
		fi = q.front().first;
		se = q.front().second;
		q.pop();
		if(!arr[fi+1][se] && cah[fi+1][se] == '#'){q.push(mp(fi+1,se));arr[fi+1][se] = ju;}
		if(!arr[fi-1][se] && cah[fi-1][se] == '#'){q.push(mp(fi-1,se));arr[fi-1][se] = ju;}
		if(!arr[fi][se+1] && cah[fi][se+1] == '#'){q.push(mp(fi,se+1));arr[fi][se+1] = ju;}
		if(!arr[fi][se-1] && cah[fi][se-1] == '#'){q.push(mp(fi,se-1));arr[fi][se-1] = ju;}
	}
}

int bfs(){
	queue<int> q;
	q.push(arr[awx][awy]);
	int a[ju+1];
	for(int i = 1; i <= ju; i++){
		a[i] = 1e9;
	}a[q.front()] = 0;
	
	while(!q.empty()){
		int no = q.front();
		int si = v[no].size();
		if(no == arr[tujx][tujy]){
			return a[arr[tujx][tujy]];
		}
		q.pop();
		
		for(int i = 0; i < si; i++){
			if(a[v[no][i]] > a[no]+1){a[v[no][i]] = a[no]+1; q.push(v[no][i]);}
		}
	}
	return -1;
}

int main(){
	cin >> s;
	cin >> r >> c;
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
		cin >> cah[i][j];
		if(cah[i][j] == 'S'){awx = i; awy = j;cah[i][j] = '#';}
		if(cah[i][j] == 'T'){tujx = i; tujy = j;cah[i][j] = '#';}
		}
	}
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(cah[i][j]=='#' && !arr[i][j]){
				ju++;
				ffil(i,j);
			}
		}
	}
	
	for(int i = 0; i < r; i++){ //horizontal
		tmp = 0;
		for(int j = 0; j < c; j++){
			if(arr[i][j]){
			if(tmp && arr[i][j]!=tmp && !b[tmp][arr[i][j]]){v[tmp].pb(arr[i][j]); v[arr[i][j]].pb(tmp);b[tmp][arr[i][j]] = true;b[arr[i][j]][tmp] = true;}
			tmp = arr[i][j];
			}
		}
	}
	
	for(int i = 0; i < c; i++){//vertikal
		tmp = 0;
		for(int j = 0; j < r; j++){
			if(arr[j][i]){
			if(tmp && tmp!=arr[j][i] && !b[tmp][arr[j][i]]){v[tmp].pb(arr[j][i]); v[arr[j][i]].pb(tmp);b[tmp][arr[j][i]] = true; b[arr[j][i]][tmp] = true;}
			tmp = arr[j][i];
			}
		}
	}
	/*for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << arr[i][j] << " ";
		}cout << endl;
	}*/
	//cout << arr[awx][awy] << " " << arr[tujx][tujy] << endl;
	
	cout << bfs() << endl;
	
}
