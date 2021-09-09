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
    int n,sum=0,coin=0,ans=0;
    cin>>n;
    int arr[n];
    int new_arr[n];
    if(n==1){
        ans=1;
        goto end;
    }
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        sum+=arr[i];
        new_arr[i] = sum;
        // cout<<new_arr[i]<<" ";
    }
    for(int i=n-1; i>=0; i--){
        coin += arr[i];
        ans+=1;
        if(coin>new_arr[i-1]){
            break;
        }
    }
    end:
    cout<<ans;
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
