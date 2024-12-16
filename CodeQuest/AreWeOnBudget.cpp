#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;


void solve(){
    int n;
    cin >> n;
    double predicted[n];
    double actual_cost[n];
    for (int i = 0; i < n; i++){
        cin >> predicted[i];
    }
    for (int i = 0; i < n; i++){
        cin >> actual_cost[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += (actual_cost[i] - predicted[i]);
    }

    cout << std::fixed << setprecision(2) << sum / n << endl;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}