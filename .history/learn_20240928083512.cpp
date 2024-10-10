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



int solve(){
  int a,b;
  cin>>a>>b;
  int p {0},y {0};
  string s;
  v_int n;
  cin>>s;
  int l {0}, r {a+b-1};
  ump_i mpp;
  int j=0;
  while (j<a+b)
  {
    if(s[j]==s[a+b-1-j]){
      mpp[s[j]]++;
    }
    else{
      if(s[j]=='?'||s[a+b-j-1]=='?'){
        mpp[s[j]]++;
        j++;
        continue;
      }
      else{
        return -1;
      }
    }
    j++;
  }
  
  do
  {
    
      if(s[l]=='?'||s[r]=='?'){
        if(s[l]=='?'){
          s[l]=s[r];
          if(s[r]=='0') p++;
          else y++;
        }
        l++;r--;

      }
      else if(s[l]!=s[r] && s[l]!='?' && s[r]!='?') return -1;
      else {
        n.push_back(l);
        l++;r--;
        
      }
      


    

  } while (l<r);
  for (int i = 0; i < n.size(); i++)
  {
    
  }
  
  co << s << el;
  co << p << el;
  co << y << el;




  

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
