#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    int n, x;
    cin >> n >> x;

    vi v(n+1);
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    v[0] = 0;

    int dis = 0, last = (x - v[n])*2;

    for(int i = 0; i < n; i++)
        dis = max(dis, (v[i+1] - v[i]));

    cout << max(dis,last) << endl;
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