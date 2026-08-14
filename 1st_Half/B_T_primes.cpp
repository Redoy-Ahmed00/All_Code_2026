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

bool isprime(ll n)
{
    if(n <= 1)
        return 0;
    for(int i = 2; i*i<= n; i++)
        if(n%i==0)
            return 0;
    return 1;
}

void solve()
{
    ll n;
    cin >> n;

    ll sq = sqrt(n);

    if(sq*sq == n && isprime(sq))
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