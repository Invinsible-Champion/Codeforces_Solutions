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
  int n,k;
  cin>>n>>k;
  int m = n-k;
  int u {m+1},h {n};
  int x = ((m+1)%2==0)?(m+2):(m+1);
  int y = (n%2==0)?(n-1):(n);
  if(x>=n){
    x=y;

  }
  int t = (y-1)/2 - (x-1)/2 + 1;
  if(t%2==0){
    co << "YES " << el;

  }
  else{
    co << "NO" << el;
  }

  

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
