#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll n,k;


ll fk(){
vector<ll> v1;
vector<ll> v2;

for(int i=1;i<=sqrt(n);i++){
if (n%i==0){v1.push_back(i);
if(i!=sqrt(n))v2.push_back(n/i);
}
}

if(k>v1.size()+v2.size())return -1;
if(k<=v1.size())return v1[k-1];
return v2[v2.size()-(k-v1.size())];
}


int main(){
cin >> n >> k;
cout << fk() <<endl;
}
