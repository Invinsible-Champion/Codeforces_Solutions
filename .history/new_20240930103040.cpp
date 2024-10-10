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
  int n;
  cin>>n;
  v_int a(n);v_int b(n);
  for (int i = 0; i < n; i++)
  {
        cin>>a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin>>b[i];
  }
  int x {0},y {0};
  for (int i = 0; i < n; i++)
  {
    if(a[i]==1 && b[i]==0){
        x++;
    }
    else if(a[i]==0 && b[i]==1){
        y++;
    }
    else{
        continue;
    }
  }
  if(x>=y){
    co << -1 << el;
  }
  else{
    int t= y+1;
    while(t%x!=0){
        t++; 
    }
  }
  
  
  
  
  





    
    return 0;
}
