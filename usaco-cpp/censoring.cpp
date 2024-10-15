#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    int index = s.find(t);
    while (index != string::npos)
    {
        s = s.substr(0, index) + s.substr(index + t.length(), s.length());
        index = s.find(t);
        }

    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}