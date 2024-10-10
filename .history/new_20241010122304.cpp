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
 int s {0};
 for (int i = 0; i < n; i++)
 {
   cin>>a[i];
   if(i!=n-1) s+=a[i];
 }
 int i=0;
 int cnt {0};
 while (i<n)
 {
  if(a[i]==0) cnt++;
  else break;
  i++;

 }
 i=cnt;
 int t=0;
 while(i<n){
  if(a[i]==0) t++;
  i++;
 }
 co << s+t << el;
 

 
 
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
