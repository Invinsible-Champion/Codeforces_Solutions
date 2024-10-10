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

  int n;
  cin>>n;
  v_int a(n);
  fovi(i,n,a)
  if(n==1) co << 1 + a[0] << el;
  else {
    int max_1 = a[0];
    int max_2 = a[1];
    int cnt_1 {0}, cnt_2 {0};
    for (int i = 0; i < n; i+=2)
    {
      if(a[i]>max_1) max_1 = a[i];
      cnt_1++;
    }
    for (int i = 1; i < n; i+=2)
    {
      if(a[i]>max_2) max_2 = a[i];
      cnt_2++;
    }

    co << max(cnt_1 + max_1 , cnt_2+max_2) << el;
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
