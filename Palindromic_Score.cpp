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
    int a, b, c;
    cin >> a >> b >> c;
    
    int a1 = b + c - ((b * c) % 2);
    int b1 = a + c - ((a * c) % 2);
    int c1 = a + b - ((a * b) % 2);
    
    cout << min(a1, min(b1, c1)) << endl;
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