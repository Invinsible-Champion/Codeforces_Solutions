#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define pb(x,name) name.push_back(x)
#define sw(a,b) swap(a,b)
#define co cout
#define el endl
#define foi(i,l,r) for(int i=l;i<=r;i++)
#define fovi(i,len,name) for(int i=0;i<=len-1;i++){ int y; cin>>y;pb(y,name);}
#define fovo(i,l,r,name) for(int i=l;i<=r;i++){ co<<name[i]<<el;}
#define sv(name) sort(name.begin(),name.end())


typedef vector<int> v_int;
typedef char c;
typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long int uli;
typedef unsigned long long int ulli;
typedef map<int,int> mp_i;
typedef unordered_map<int,int> ump_i;
typedef map<char,int> mp_c;



void solve(){

    int x;
    cin>>x;
    if(x<=9){
        co << x << el;
    }
    else if(9<x && x<=17){
        int i=1 ;
        while(i<=9){
            if(x-i>9){
                continue;
            }
            else{
                co << 10*i + x-i << el;
                break; 
            }
            i++;
        }
    }
    else if()
   
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ulli t;
    cin>>t;
    while(t--){
        solve();
    }

    


    return 0;
}
