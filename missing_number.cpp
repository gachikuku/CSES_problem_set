#include <bits/stdc++.h>

using namespace std;

#define ll long long


void solve(){

    ll n, s=0;
    
    cin >> n;
    
    for (int i=1; i<n; i++){
    
        int a;
        
        cin >> a;
        
        s += a;
    }
    
    cout << (n*(n+1)/2) - s << "\n";
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}