#include <bits/stdc++.h>

using namespace std;

long long count_pairs(long long n)
{
    return ((n * (n - 1)) / 2);
}

void solve()
{
    int n;
    cin >> n;
    long long total = count_pairs(n);
    unordered_map<int, long long> freq;

    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        freq[a]++;
    }

    for (auto pair : freq)
    {
        if (pair.second >= 2)
        {
            total -= count_pairs(pair.second);
        }
    }
    cout << total;
}

int main()
{
    solve();

    return 0;
}