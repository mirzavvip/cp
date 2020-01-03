#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll n, arr[300000];
 
int main(){
cin>>n;
for(int i = 1; i <= n; i++){
cin>>arr[i];
}
for(int i = 1; i<=n/2;i++){
if(i%2){swap(arr[i],arr[n-i+1]);}
}
for(int i = 1; i <= n; i++){
cout<<arr[i];
if(i!=n)cout<<" ";
}
cout<<endl;
}
