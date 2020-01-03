#include <bits/stdc++.h>
#define ll long long
using namespace std;

double ti, n, now, k, l, l2, rr, m, v1, v2;

bool cek(double ti){
	double ti1 = (l-v1*ti)/(v2-v1);
	double ti2 = (v2-v1)*ti1/(v2+v1);
	ll tmp = (n+k-1)/k;
	double titi = ti1*tmp+ti2*(tmp-1);
	return titi<=ti;
}

int main(){
	cin >> n >> l >> v1 >> v2 >> k;
	
	l2 = l/v2;
	rr = l/v1;
	for(int i = 1; i <= 100000; i++){
		m = (l2+rr)/2;
		if(cek(m))rr=m;
		else l2 = m;
	//	cout << m << endl;
	}
	
	printf("%.10f\n",m);
}
