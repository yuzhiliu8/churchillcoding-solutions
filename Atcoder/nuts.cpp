#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > 10)
        {
            total += (a - 10);
        }
    }
    cout << total;
}

int main()
{

    solve();

    return 0;
}