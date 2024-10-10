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
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sv(a);
  fovo(i,0,a.size()-1,a)
  co << el;
  do{
    int x = a[0] + a[1];
    int t = (x%2==0)?(x/2):((x-1)/2);
    co << t << el;
    a.push_back(t);
    a.erase(a.begin()+0);
    a.erase(a.begin()+1);
    sv(a);
  //  fovo(i,0,a.size()-1,a)
  //  co << el;
  }while(a.size()!=1);
  co << a[0] << el;
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
