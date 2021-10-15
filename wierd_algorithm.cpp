#include <bits/stdc++.h>

using namespace std;


void solve(){

    long n;

    cin >> n;
    
    while (n){
    
        if (n%2==0){
        
            cout << n << " ";
            
            n /= 2;
        }
        
        else if (n == 1){
        
            cout << n << "\n";
            
            break;
        }
        
        else {
        
            cout << n << " ";
            
            n = 3*n + 1;
        }
    }

}



int main(){

    ios::sync_with_stdio(0);
    
    cin.tie(0);
    
    solve();

    return 0;
}