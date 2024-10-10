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
  int n,x;
  cin>>n>>x;
  v_int a(n);
  int e {0}, o {0};
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    if(a[i]%2==0) e++;
    else o++;

  }
  if( ) 

  


   
}
*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   /* int t;
    cin>>t;
    while(t--){
       solve();
    }
  */
 int n,x;
 cin>>n>>x;
 v_int a(n);
 fovi(i,n,a)
 sv(a);
 if(x==0){
  if(a[0]>=2) co << a[0]-1 << el;
  else co << -1 << el;
 }
 else if(x>0&&x<n){
  if(a[x-1]==a[x]) co << -1 << el;
  else co << a[x-1] +1<<el;
 }
 else {
  co << a[n-1] + 1 << el;
 }

  return 0;
}
