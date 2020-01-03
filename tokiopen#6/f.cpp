#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, x,ans, arr[1500],l;
vector <ll> v;

void sieve(ll nn) 
{ 
    bool prime[nn+1]; 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p<=nn; p++) 
    { 
        if (prime[p] == true) 
        {
			v.push_back(p);
            for (int i=p*p; i<=nn; i += p) 
                prime[i] = false; 
        } 
    } 
}

int main(){
	sieve(1200);
	ans = 1;
	cin >> n;
	for(int j = 0; j < n*n-1; j++){
		cin >> x;
		ll i = 0;
		while(x!=1){
			while(x%v[i]==0){
				x/=v[i];
				arr[v[i]]++;
			}
			i++;
		}
	}
	
	l = v.size();
	
	for(int i = 0; i < l; i++){
		while(arr[v[i]]%n!=0){
			arr[v[i]]++;
			ans*=v[i];
		}
	}
	
	cout << ans << endl;
}
