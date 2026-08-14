#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rrep(i, a, b) for(int i = (a); i >= (b); i--)

typedef long long ll;
typedef vector <int> vi;
typedef vector <bool> vb;
typedef vector <double> vd;
typedef vector <ll> vll;

const ll LIMIT  = 200000;
vb isprime(LIMIT, true);
vi prime;

void seive ()
{

    isprime[0]=isprime[1]=false;

    rep(i,2,LIMIT)
    {
        if(isprime[i])
        {
            prime.push_back(i);
            for(ll j = 1LL*i*i; j < LIMIT; j += i)
                isprime[j] = false;
        }
    }
}

void solve()
{    
    int n;
    cin >> n;

    vll v(n+1);

    rep(i,1,n+1)
        v[i] = 1LL * prime[i]*prime[i-1];

    rep(i,1,n+1)
        cout << v[i] << " ";
    cout << endl;
}

int main ()
{
    optimize();

    seive();              
    int t = 1;
    cin >> t;



    while(t--)
        solve();
        
    return 0;
}