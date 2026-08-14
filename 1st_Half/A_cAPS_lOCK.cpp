#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    bool flag = true;

    for (int i = 1; i < n; i++)
    {
        if (islower((unsigned char)s[i]))
        {
            flag = false;
            break;
        }
    }

    if (flag)
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
