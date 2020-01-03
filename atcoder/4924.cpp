#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define se second
#define fi first
ll a,b,h,w,ans,to,r,c,jarak;
char cc;
bool bb[1010][1010];
using namespace std;

int main(){
    cin>>h>>w;
    queue<pair<ll, pair <ll, ll> > > q;
    
    for (int i=1; i<=h; i++){
        for (int j=1; j<=w; j++){
            cin>>cc;
            if (cc=='#'){
                bb[i][j]=1;
                q.push(mp(0,mp(i,j)));
            }
            else bb[i][j]=0;
        }
    }
    
    while (!q.empty()){
        r=q.front().se.fi;
        c=q.front().se.se;
        jarak=q.front().fi;
        q.pop();
        
		if (jarak!=0 && (r<1 || r>h || c<1 || c>w || bb[r][c])) continue;
        
		ans=jarak;
        bb[r][c]=1;
        q.push(mp(jarak+1,mp(r+1,c)));
        q.push(mp(jarak+1,mp(r-1,c)));
        q.push(mp(jarak+1,mp(r,c+1)));
        q.push(mp(jarak+1,mp(r,c-1)));
    }
    
    cout<<ans<<endl;
}
