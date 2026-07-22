#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;
priority_queue<ll, vector<ll>, greater<ll>> q;
void solve()
{
    ll a;
    cin >> a;

    if(a == 1)
    {
        ll b;
        cin >> b;
        q.push(b);
    }
    else
    {
        if(q.empty())
            cout << "empty\n";
        else
        {
            ll mn = q.top();
            cout << mn << endl;
            while(!q.empty()&&q.top() == mn)
                q.pop();
        }

    }

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