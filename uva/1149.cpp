#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
ll t, to, a[20000], l,n,x;
 
int main (){
 
	cin >> t;
 
	while(t--){
		cin >> n;
		cin >> l;
		to=0;
		for(int i = 0; i <= 10000; i++){
			a[i]=0;
		}
		for(int i = 0; i < n; i++){
			cin >> x;
			a[x]++;
		}
		for(int i = l; i >0; i--){
			int j = l-i;
			while(a[i]>0){
				if(j==0){to+=a[i];a[i]=0;}
else if(j==i){to+=a[i]/2; a[i]%=2;}
				else if(a[j]>a[i]){to+=a[i]; a[j]-=a[i]; a[i]=0;}
				else {to+=a[j]; a[i]-=a[j];a[j]=0;}j--;
			}
		}
		cout << to << endl;
if(t>0)cout<<endl;
	}
}
