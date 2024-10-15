#include <bits/stdc++.h>

using namespace std;

vector<int> count_freq(string s)
{
    vector<int> freq(26, 0);
    for (char c : s)
    {
        freq[c - 'a']++;
    }
    return freq;
}

void solve()
{
    int n;
    cin >> n;
    string word1, word2;
    vector<int> ans(26, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> word1 >> word2;
        vector<int> freq1 = count_freq(word1);
        vector<int> freq2 = count_freq(word2);

        for (int j = 0; j < 26; j++)
        {
            ans[j] += max(freq1[j], freq2[j]);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << ans[i] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}