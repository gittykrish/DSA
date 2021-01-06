/*
    Given a non empty array of interger , every element appears three times except one ,
    which appears exactly one . Find that single one.
    Input : [2,2,3,2]       output: 3
    Input : [0,1,0,1,0,99]  Output : 99
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t; cin>>t;
    while(t--){
        int n; 
        cin>>n;
        map<int, int>mp;
        while(n--){
            int a;
            cin>>a;
            mp[a]++;
            
        }
        for(auto x:mp){
                if(x.second==1){
                    cout<<x.first<<"\n";
                    break;
                }
        }
    }
    return 0;
}