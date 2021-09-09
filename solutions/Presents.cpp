//author: PS_455
    
//header files
#include <bits/stdc++.h>
using namespace std;

    
//define shortcuts
#define ll long long
#define endl "\n"
#define FASTO ios_base::sync_with_stdio(false); cin.tie(NULL);

//functions
int __gcd(int a, int b) { if(b == 0){return a;} return __gcd(b, a % b); }
    
/*-------------------------code---------------------------------*/

void solve(){
    int n;cin>>n;
    int arr[n+1];
    int ans[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        ans[arr[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }

}
    
int main(){
    
    FASTO
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    
    int t=1;
    // cin>>t;
    
    while(t--){
    solve();
    }
    
    return 0;
}
