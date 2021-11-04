#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve(){

    ll n, ans = 0;
    
    int mx = 0;

    cin >> n;
    
    for (int i=1; i<=n; i++){
    
        int x;
        
        cin >> x;
        
        mx = max(x, mx);
        
        ans += mx - x;
    }
    
    cout << ans << "\n";
}


int main(){

    ios::sync_with_stdio(0);
    
    cin.tie(0);

    solve();

    return 0;
}