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
    int n, k;
    cin >> n >> k;
    vi v0, v1;

    rep(i,0,n)
    {
        int a;
        cin >> a;
        if(i%2)
            v1.push_back(a);
        else
            v0.push_back(a);

    }

    int p = v0.size();
    int q = v1.size();

    sort(v0.rbegin(), v0.rend());
    sort(v1.begin(), v1.end());

    int least = min(k, min(p,q));

    rep(i,0,least)
    {
        if(v0[i] > v1[i])
            swap(v0[i], v1[i]);

    }

    int mps = accumulate(v0.begin(), v0.end(), 0); 
    int tps = accumulate(v1.begin(), v1.end(), 0); 

    if(tps > mps)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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