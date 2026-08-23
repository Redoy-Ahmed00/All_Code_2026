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
    int n, add = 0, a = 0, b = 0;
    cin >> n;
    priority_queue<int> pq;;

    rep(i,0,n)
    {
        int x;
        cin >> x;
        pq.push(x);
        add += x;
    }

    while(add > 0)
    {
        if(add%2==0)
        {
            int tp = pq.top();
            pq.pop();
            if(tp%2==0)
            {
                add -= tp;
                a += tp;
            }
            else
            {
                if(tp == 1)
                {
                    a += 1;
                    add -= 1;
                }
                else
                {
                    add -= tp-1;
                    a += tp-1;
                    pq.push(1);
                }
            }
        }
        else if(add%2==1)
        {
            int tp = pq.top();
            pq.pop();
            if(tp%2==0)
            {
                add -= tp;
                b += tp;
            }
            else 
            {
                if(tp == 1)
                {
                    b += 1;
                    add -= 1;
                }
                else
                {
                    add -= tp-1;
                    b+= tp-1;
                    pq.push(1);
                }               
            }
        }
    }

    cout << a << nl;

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