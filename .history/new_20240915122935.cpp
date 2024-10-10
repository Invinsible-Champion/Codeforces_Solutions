#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define pb(x,name) name.push_back(x)
#define sw(a,b) swap(a,b)
#define co cout
#define el endl
#define foi(i,l,r) for(int i=l;i<=r;i++)
#define fovi(i,len,name) for(int i=0;i<=len-1;i++){cin>>name[i];}
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
    int n;
    cin>>n;
    v_int v(n);
    fovi(i,n,v)
    ump_i mpp;
    for (int j = 0; j < n; j++)
    {
        mpp[v[j]]++;
    }
    ump_i::iterator it;
    int m=0;
    for(it=mpp.begin();it!=mpp.end();it++){
        if(it->second > m){
            m = it->second;
        }


    }
   co << n - m << el;


   
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
   }
  
    return 0;
}
