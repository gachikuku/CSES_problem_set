#include <bits/stdc++.h>

using namespace std;



void solve(){

    int longest = 0;
    
    string n;
    
    cin>>n;
    
    for(int unsigned i=0; i<n.length();){
    
        char current = n[i];
        
        int currLen = 0;
        
        for(;i<n.length()&&current==n[i]; ++i)
            ++currLen;
            
        if(currLen > longest)
            longest = currLen;
    }

    cout<<longest<<"\n";
}




int main(){

    ios::sync_with_stdio(0);
    
    cin.tie(0);
    
    solve();
    
    return 0;
}