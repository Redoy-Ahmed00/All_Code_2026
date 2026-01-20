#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    bool ok = true;

    for (int i = 1; i < n; i++)
    {
        if (islower((unsigned char)s[i]))
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        for (char &c : s)
        {
            if (islower((unsigned char)c))
                c = toupper((unsigned char)c);
            else
                c = tolower((unsigned char)c);
        }
    }

    cout << s << '\n';
    return 0;
}
