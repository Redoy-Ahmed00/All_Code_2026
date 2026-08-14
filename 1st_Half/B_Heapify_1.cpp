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
    vi a(n + 1);

    for(int i = 1; i <= n; i++)
        cin>>a[i];
    
    for(int i = 1;i <= n; i += 2)
        for(int j = i; j <= n; j *= 2)
            for(int k = i * 2;k <= n; k *= 2)
                if(a[k/2]>a[k])
                    swap(a[k/2],a[k]); 
    
    if(is_sorted(begin(a),end(a)))
        cout<<"YES\n";
    else 
        cout<<"NO\n";
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