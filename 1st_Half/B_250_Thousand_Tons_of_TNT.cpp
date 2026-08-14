#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n;
    cin >> n;

    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vi ps(n+1, 0);
    for(int i = 1; i <= n; i++)
        ps[i] = ps[i-1] + v[i-1];

    int ans = INT_MIN;

    for(int win = 1; win <= n; win++)
    {
        if(n % win != 0) continue;

        int mx = INT_MIN, mn = INT_MAX;

        for(int i = win; i <= n; i += win)
        {
            int sum = ps[i] - ps[i-win];
            mx = max(mx, sum);
            mn = min(mn, sum);
        }

        ans = max(ans, mx - mn);
    }

    cout << ans << nl;
}

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}