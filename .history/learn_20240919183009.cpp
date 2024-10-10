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

bool check_equal(v_int t){
   int j=1;
   while(j<t.size()){
    if(t[j]!=t[0]){
        return false;
        break;
    }
    j++;
   }
   return true;
}
/*

void solve(){
   int a1,a2,a3,a4;
   cin>>a1>>a2>>a3>>a4;
   int r {a1};
   int x = min(a2,a3);
   if(x<a1){
       int y = max(a2,a3);
       co << r + x + a1+x << el;
   }
   else if(x==a1){
    int y = max(a2,a3);
    if(y<a1+x){
        
    }

   }
   
}
*/




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t;
   // cin>>t;
   // while(t--){
     //   solve();
  // }
  string x;
  char prev;
  cin>>x;
  prev = x[0];
  int i {1},cnt {1};
  while(i<x.length()){
    if(prev==x[i]){
      if(cnt==6){
        co << "YES" << el;
        return 0;
      }
      else{
        cnt++;
      }

    }
    else{
      prev = x[i];
      cnt = 1;
    }
    i++;

  }
  co << cnt << el;
  co << "NO" << el;
  
    return 0;
}
