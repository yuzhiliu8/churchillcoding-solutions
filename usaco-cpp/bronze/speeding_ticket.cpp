#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;

    vector<int> limit(100);
    vector<int> speed(100);

    int position = 0;
    for (int i = 0; i < n; i++)
    {
        int miles, lim;
        cin >> miles >> lim;
        for (int j = position; j < (position + miles); ++j)
        {
            limit[j] = lim;
        }
        position += miles;
    }

    position = 0;
    for (int i = 0; i < n; i++)
    {
        int miles, sp;
        cin >> miles >> sp;
        for (int j = position; j < position + miles; j++)
        {
            speed[j] = sp;
        }
        position += miles;
    }

    int mx = 0;
    for (int i = 0; i < 100; i++)
    {
        mx = max(mx, speed[i] - limit[i]);
    }

    cout << mx << endl;
}

int main()
{
    solve();

    return 0;
}
