#include <bits/stdc++.h>

using namespace std;

int n, s, m;
int p, k, l;

long long maks;

priority_queue<int, vector<int>, greater<int> >q;

int main()
{
    string a;

    cin >> a;

    cin >> n >> s >> m;

    int sa = s;

    if(m > sa + n -1){
        cout << -1 << "\n";
        return 0;
    }

    for(int i = 1; i < n; i++){
        cin >> p  >> k >> l;

        if(p > i + sa -1){
            cout << -1 << "\n";
            return 0;
        }

            for(; s < p;){
                maks+=q.top();
                //cout << " + ";
                q.pop();
                s++;
            }

            if(l <= k){
                maks+=l;
               // cout << " + ";
                s++;
            }
            else{
                maks+=k;
               // cout << l - k << " + ";
                q.push(l-k);
            }
    }

        for(;s<m;){
            maks+=q.top();
            q.pop();
            s++;
        }

    cout << maks << "\n";

    return 0;
}
