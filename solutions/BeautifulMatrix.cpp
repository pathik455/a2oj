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
    int arr[6][6];
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                cout<<abs(i-3) + abs(j-3);
                goto end;
            }
        }
    }
    end:
    cout<<endl;


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
