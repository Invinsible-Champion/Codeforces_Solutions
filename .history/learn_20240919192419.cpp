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


void solve(){
  int n;
  if(n==1){
    co << 0 << el;
  }
  
  else{
    int cnt = 0;
    while(n!=1){
      if(n%3!=0){
        cnt = -1;
        
        break;
      }
      else{
        cnt++;


        if(n%6==0){
          n/=6;

        }
        else{
          n*=2;
        }
      }
    }
     co << cnt <<el;
   
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