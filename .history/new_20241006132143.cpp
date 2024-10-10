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
void solve(){
  int n,x;
  cin>>n>>x;
  v_int a(n);
  mp_i mpp;

  for(int i=0;i<n;i++){
    cin>>a[i];
    mpp[a[i]]++;
  }
  if(cont_0(a)){
    mp_i::iterator it;
    it = mpp.begin();
    v_int b;
    while(it!=mpp.end()){
      if(it->second>1) b.push_back(it->first);
      it++;
    }
    it=mpp.begin();
    int i=0;
    while(it!=mpp.end()){
      if(it->first!=i){
        if(check_(x,i,b)){
          i++;
          continue;
        }
        else{
          co << it->first <<el;
          return;
          break;
        }
      }
      it++;
    }
    for (int i = mpp.end()->first+1; ;i++)
    {
      if(check_(x,i,b)){
        continue;

      }
      else{
        co << i << el;
        return;
      }
      
    }
    


    

    

  }
  else co << 0 <<el;
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
