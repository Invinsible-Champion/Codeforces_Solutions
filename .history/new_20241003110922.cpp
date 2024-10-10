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

int min_pow(int n,int k){
  int r=k,t=1;
  while(r<=n){
    t++;

    r=pow(k,t);
  }
  return t-1;



}

int moves(int n,int k){
  int m=1;
  if(n<k){
    return n;
  }
  else if(n==k){
    return 1;
  }
  else{
    int x  = min_pow(n,k);
    co << n-pow(k,x) << el;
    
    
    m+=moves((n-pow(k,x)),k);
    return m;
  }
  
}

void solve(){

  int n,m,q;
  cin>>n>>m>>q;
  int c1,c2;
  cin>>c1>>c2;
  int p;
  cin>>p;
  if(p==c1 || p==c2) co << 0 << el;
  else if(p<min(c1,c2)) co << min(c1,c2)-1 << el;
  else if(p>max(c1,c2)) co << n-max(c1,c2) <<el;
  else{
    int m = (max(p-c1,c2-p)%2==0)?(max(p-c1,c2-p)/2):(max(p-c1,c2-p)/2 + 1);
    co << m << el;
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
