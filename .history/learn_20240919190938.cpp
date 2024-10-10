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
  // 
  int n;
  cin>>n;
  if(n>=0){
    co << n << el;
  }
  else{
    int q1 = n/10;
    int q2 = -1*((abs(n)/100)*10 + (abs(n%10)/10));
    co << q1 << el;

    co << q2 << el;
    if(max(q1,q2)>n){
      co << max(q1,q2) << el;
    }
    else{
      co << n << el;
    }

  }
  
    return 0;
}
