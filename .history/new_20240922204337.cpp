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

/*

void solve(){
    int n,m,q;
    cin>>n>>m>>q;
    v_int b(m);
    int x;
    fovi(i,m,b);
    cin>>x;
    int min = abs(x - b[0]);
    for (int i = 1; i < m; i++)
    {
        if(abs(x-b[i])<min){
            min = abs(x-b[i]);
        }
    }
    co << min << el;
    

   
}


*/


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t;
   // cin>>t;
   // while(t--){
   //    solve();
  //  }
  int a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;
  int t = max(a,b);
  int m = max(t,c);
  int s = a+b+c;
  co << max((m*(s-m)),a*b*c)<<el;


    
    return 0;
}