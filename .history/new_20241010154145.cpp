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












void solve(){
  int n;
  cin>>n;
  v_int a(n);
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
   v_int o(n);
   o[0] = a[0];
   for (int i = 1; i < n; i++)
   {
     int t1,t2;
     t1 = o[i-1] + a[i];
     t2 = o[i-1] - a[i];
     if(t1>0 && t2>0 && t1!=t2){
      co << -1 << el;
      return;
     }
     else{
      int m = (t1>=0)?(t1):t2;
      o[i] = m;


     }

   }
   for (int i = 0; i < n; i++)
   {
    co << o[i] << " ";
   }
   co << endl;
   
   
 
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
