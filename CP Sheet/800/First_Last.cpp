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
    ll n;
    cin >> n;

    vll a(n);
    map <ll, pair<ll,ll>> mp;

    for(int i = 0; i < n; i++)
        cin >> a[i]; 
    
    for(int i = 0; i < n; i++)
    {
        if(mp.find(a[i]) == mp.end())
            mp[a[i]] = {i+1, i+1};
        else
            mp[a[i]].second = i+1;
    }

    for(auto u : mp)
        cout << u.first << ' ' << u.second.first << ' ' << u.second.second<< ' ' << endl;

}
int main ()
{
    optimize();
              
    int t = 1;
    //cin >> t;

    while(t--)
        solve();
        
    return 0;
}