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
        vll a(n + 1);
        rep(i,1,n+1) cin >> a[i];

        vll SM(n + 2, LLONG_MAX);
        for (int i = n; i >= 1; i--)
        {
            SM[i] = min(SM[i + 1], a[i]);
        }

        vi left_bound(n + 1, 0);
        stack<int> st;

        for (int i = 1; i <= n; i++)
        {
            while (!st.empty() && a[st.top()] >= a[i])
            {
                st.pop();
            }
            left_bound[i] = st.empty() ? 0 : st.top();
            st.push(i);
        }

        ll base_moving = 0;
        for (int i = 1; i <= n; i++)
        {
            base_moving += a[i] - min(a[i], SM[i]);
        }

        ll best_gain = 0;

        for (int i = 1; i <= n; i++)
        {
            if (SM[i] >= a[i])
            {
                ll gain = (i - 1 - left_bound[i]);
                best_gain = max(best_gain, gain);
            }
        }
        cout << base_moving + max(0LL, best_gain) << "\n";


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