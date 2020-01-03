#include <bits/stdc++.h>

using namespace std;

int sudut[1801]; // sudut dengan kecepatan terbesar



int ki[1801]; // kecepatan terbesar

int cnt[1801]; // jumlah gerigi dengan sudut sama

int n;

int sitemp, ktemp;

double maks;

double jarak(double k, double s){
    return (double)fabs(2*k*k*sin(s/1800*acos(-1))*cos(s/1800*acos(-1))*9.8);
}

int main()
{
    string acak;

    cin >> acak;

    memset(sudut, -1, sizeof(sudut));

    sudut[0] = 0;

    cin >> n;

    for(int i = 1; i <= n; i++){

        cin >> ktemp >> sitemp;

        if(sitemp*(cnt[sitemp]+1)<=1800)cnt[sitemp]++;

        if(ktemp > ki[sitemp])ki[sitemp] = ktemp;

    }

    for(int i = 1; i <= 1800; i++){
        for(int x = 1; x <= cnt[i]; x++){
            for(int j = 1800; j >= i; j--){
                if(sudut[j-i] != -1)
                    sudut[j] = max(max(sudut[j], sudut[j-i]), ki[i]);
            }
        }
    }

    for(int i = 1; i <= 1800; i++){
        if(jarak((double)sudut[i], (double)i) > maks)maks = jarak((double)sudut[i], (double)i);
    }

    printf("%.12lf\n", maks);

//    printf("%.12lf\n", jarak(320, 200));

    return 0;
}
