#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;

void solve(){
    string a;
    cin >> a;

    string b = "";
    for (int i = 0; i < a.length(); i++){
        if (a[i] == 'q'){
            b = 'p' + b;
        } 
        else if (a[i] == 'p'){
            b = 'q' + b;
        }
        else {
            b = 'w' + b;
        }
    }
    cout << b << endl;
}

int main(){
    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}
