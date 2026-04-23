#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef vector <int> vi;
typedef vector <bool> vb;
typedef vector <double> vd;
typedef vector <ll> vll;


vi l[100006], l2[100006];
vi lvl(100006, -1);
int n;

void bfs (int src)
{
    vb vis(n+1, false);
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lvl[src] = 0;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(auto x : l[cur])
            if(!vis[x])
            {
                q.push(x);
                vis[x] = true;
                lvl[x] = lvl[cur] + 1;
            }
    } 
}

void solve()
{
    cin >> n;
    int e= n-1;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        l[a].push_back(b);
        l[b].push_back(a);
        
        l2[a].push_back(b);
    }
    bfs(1);

    int q;
    cin >> q;
    while(q--)
    {
        int u, v;
        cin >> u >> v;

        int ol = lvl[v];
        lvl[v] = 0;

        for(auto x : l2[v])
            lvl[x] -= ol; 
        
    }
    
    for(int i = 1; i <= n; i++)
        cout << lvl[i]*2 << ' ';

    cout << endl;

}

int main ()
{
    optimize();
              
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
        
    return 0;
}