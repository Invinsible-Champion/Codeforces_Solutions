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


bool is_prime(int n){
  int i=2;
  while(i<sqrt(n)){
    if(n%i==0) return false;
    i++;
  }
  return true;
}

/*
void solve(){

   
}
B
*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t;
   // cin>>t;
   // while(t--){
   //     solve();
  //  }
  int n;
  cin>>n;
  int a_1 {0},a_2 {0};
  v_int a(n);
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    if(a[i]==1) a_1++;
    else a_2++;

  }
  int max_sum = 2*a_2 + a_1;
  v_int p;
  int j=2;
  while(j<=max_sum){
    if(is_prime(j)) p.push_back(j);
    j++;
  
  }
  int pre_sum = 0;
  j=0;
  while(j<n){
    
    j++;
  }


  return 0;
}
