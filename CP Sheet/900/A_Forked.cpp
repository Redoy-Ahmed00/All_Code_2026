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
    int a, b;
    cin >> a >> b;
    int kx, ky, qx, qy;
    cin >> kx >> ky >> qx >> qy;

    set <pair<int,int>> s;

    int dx[4] = {1, 1, -1 , -1};
    int dy[4] = {1, -1, 1 , -1};

    for(int i = 0; i < 4; i++)
    {
        s.insert({kx+(dx[i]*a), ky+(dy[i]*b)});
        s.insert({kx+(dx[i]*b), ky+(dy[i]*a)});

        s.insert({qx+(dx[i]*a), qy+(dy[i]*b)});
        s.insert({qx+(dx[i]*b), qy+(dy[i]*a)});
    }

    cout <<(16-s.size()) % 8 << endl; 


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