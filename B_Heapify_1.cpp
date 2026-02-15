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

    vector<int> v(n+1), a(n+1);

    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
        a[i] = v[i];
    }

    sort(a.begin(),a.end());

    for(int i = 1; i <= n/2; i++)
    {
        if(v[i] > v[2*i])
            swap(v[i], v[2*i]);
    }

    

    cout << ((a==v) ? "YES\n" : "NO\n");
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