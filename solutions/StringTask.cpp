#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k=0;
    string s;
    cin>>s;
    char arr[s.size()+1];
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' || s[i] == 'y' || s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U' ||s[i] == 'Y'){
           
        }
        else{
            if(s[i] >= 'B' && s[i] <= 'Z'){
                arr[k] = s[i] + 32;
            }
            else{
                arr[k] = s[i];
            }
            k++;
        }
       
    }
 
    for(int i=0; i<k; i++){
        cout<<"."<<arr[i];
    }
    
    return 0;
}