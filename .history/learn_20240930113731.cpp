#include <bits/stdc++.h>
#include <iostream>
#include <vector>

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
int max_el(v_int v,int idx){
  int max = v[0];
  for (int i = 0; i <=idx; i++)
  {
      if(v[i]>max){
        max = v[i];
      }
  }
  return max;

}

/*
void solve(){



  

}
*/





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t;
   // cin>>t;
    //while(t--){
      //solve();
   // }   
  int n;

  v_int a(n);
  unordered_map<int,int> mpp;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    mpp[a[i]]++;
  }
  co << n - mpp.size() << el;
  
  
   return 0;
}
