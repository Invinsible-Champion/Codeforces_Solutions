#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define pb(x,name) name.push_back(x)
#define sw(a,b) swap(a,b)
#define co cout
#define el endl
#define foi(i,l,r) for(int i=l;i<=r;i++)
#define fovi(i,len,name) for(int i=0;i<=len-1;i++){cin>>name[i];}
#define fovo(i,l,r,name) for(int i=l;i<=r;i++){ co<<name[i]<<" ";}
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
bool cont_0(v_int a){
  int i=0;
  while(i<a.size()){
    if(a[i]==0) return true;
    i++;
  }
  return false;
}
bool check_(int x,int n,v_int t){
  int i=0;
  while(i<t.size()){
    if(t[i]<n) {
      if((n-t[i])%x==0) return true;
    }
    i++;
  }
  return false;
}
int find_mex(v_int v){
  int mex = 0;
  int i=0;
  while(i<v.size())
}









void solve(){
 int n;
 cin>>n;
 v_int a(n);
 for (int i = 0; i < n; i++)
 {
   cin>>a[i];
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
