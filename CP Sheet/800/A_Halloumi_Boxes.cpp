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
    int n, k;
    cin >> n >> k;

    vll v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    if( is_sorted( v.begin(), v.end()) || k > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    

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