#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rrep(i, a, b) for(int i = (a); i >= (b); i--)

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    int n;
    cin >> n;
    vll v(n), tmp(n) ,ps(n), ans(n), ahead(n);
    rep(i,0,n)
    {
        cin >> v[i];
        tmp[i] = v[i];
    }
    sort(tmp.begin(),tmp.end());

    ps[0] = tmp[0];
    rep(i,1,n)
        ps[i] = ps[i-1]+tmp[i];

    ahead[n-1]=0;
    rep(i,0,n-1)
    {
        if(ps[i]>=tmp[i+1])
            ahead[i]=1;
        else
            ahead[i]=0;
    }

    vi psa(n);
    int p = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if(ahead[i] == 1)
            p++;
        else
            p=0;
        psa[i] = p;
    }


    rep(i,0,n)
    {
        int idx = (lower_bound(tmp.begin(), tmp.end(), v[i])) - tmp.begin();

        ll cidx = psa[idx];

        ans[i] = idx + cidx;
    }

    for(auto x: ans)
        cout << x << " ";
    cout << endl;
}

int main ()
{
    optimize();
              
    int t = 1;
    cin >> t;

    while(t--)
        solve();
        
    return 0;
}