#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll tmp, n,to;
map<ll,ll>m;
map<ll,bool>b;
 
int main(){
cin>>n;
while(n--){
cin >> tmp;
m[tmp]++;
to+=b[m[tmp]];
b[m[tmp]]=1;
}
cout << to << endl;
}
