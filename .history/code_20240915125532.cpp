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


/*
void solve(){

   
}

*/
int s(int n){
    string x = to_string(n);
    int sum {0};
    for (int i = 0; i < x.length(); i++)
    {
        sum+=int(x[i]-'0');
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t;
   // cin>>t;
   // while(t--){
   //     solve();
  //  }
  int64_t n;
  cin>>n;
  int r {0};
  if(n==0){
    co << 0 << el;
  }
  else{
    int j=1;
    while(j>0){
        int m =  s(n);
        co << m << el;
        if(m/10==0){
            r++;
            break;
        }
        else{
            r++;
            n = m ;

        }
        

    }
    co << r << el;
  }

    


    return 0;
}
