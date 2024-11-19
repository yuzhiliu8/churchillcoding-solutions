#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        freq[a]++;
    }
    vector<int> keys;
    for (auto kv: freq){
        keys.push_back(kv.first);
    }

    long long sum = 0;
    for (size_t i = 0; i < keys.size(); i++){
        for (size_t j = i+1; j < keys.size(); j++){
            int sq_diff = pow(abs(keys[j]-keys[i]), 2);
            sum += freq[keys[i]] * freq[keys[j]] * sq_diff;
        }
    }
    cout << sum << endl;

}

int main(){

    solve();
    return 0;
}