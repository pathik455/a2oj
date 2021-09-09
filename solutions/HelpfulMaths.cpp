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

const int N=1e5+7;
int arr[N],k=0;

void solve(){
    string s;
    cin>>s;
    // cout<<s<<endl;

    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            arr[k] = (int)(s[i] - 48);
            k++;
        }
    }
    sort(arr,arr+k);
    for (int i = 0; i < k; i++)
    {
        cout<<arr[i];
        if(i<k-1){
            cout<<"+";
        }
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
