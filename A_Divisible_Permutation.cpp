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
    int arr[n];

    for(int i = n-1, j = 1; i >= 0; i-=2, j++)
        arr[i] = j;
    for(int i = n-2, j = n; i >= 0; i-=2, j--)
        arr[i] = j;

    rep(i,0,n)
    {
        cout << arr[i];
        if(i <n-1)
            cout << ' ';
    }
    cout << endl;
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