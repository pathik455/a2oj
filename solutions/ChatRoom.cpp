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
    int sum=0,k;
    string s;cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='h'){
            sum+=1;
            k=i+1;
            break;
        }
    }
    for(int i=k; i<s.size(); i++){
        if(s[i]=='e'){
            sum+=1;
            k=i+1;
             break;
        }
    }
    for(int i=k; i<s.size(); i++){
        if(s[i]=='l'){
            sum+=1;
            k=i+1;
             break;
        }
    }
    for(int i=k; i<s.size(); i++){
        if(s[i]=='l'){
            sum+=1;
            k=i+1;
             break;
        }
    }
    for(int i=k; i<s.size(); i++){
        if(s[i]=='o'){
            sum+=1;
            k=i+1;
             break;
        }
    }
    if(sum==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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
