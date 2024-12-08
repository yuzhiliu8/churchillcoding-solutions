#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<ll> cnt(401, 0);

    for (int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        cnt[x+200]++;
    }

    ll sum = 0;
    for (int i = 0; i < 401; i++){
        for (int j = i; j < 401; j++){
            sum += cnt[i] * cnt[j] * (i-j) * (i-j);
        }
    }
    cout << sum << '\n';

    
}

int main(){

    solve();
    return 0;
}