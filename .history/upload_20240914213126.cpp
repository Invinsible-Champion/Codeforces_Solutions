#include <bits/stdc++.h>
using namespace std;
#define pb(x,name) name.push_back(x)
#define sw(a,b) swap(a,b)
#define co cout
#define el endl
#define foi(i,l,r) for(int i=l;i<=r;i++)
#define fovi(i,len,name) for(int i=0;i<=len-1;i++){ cin>>v[i];}
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
    bool val = true;
    int j=2;
    while(j<sqrt(n)+1){
        if(n%j==0){
            return false;
        }
        
        j++;
    }
    return val;
}
/*
void solve(){
    int n;
    cin>>n;
    v_int v(2*n);
    fovi(i,2*n,v);
    int ev_ {0},od_ {0};
    for (int j = 0; j < 2*n; j++)
    {
        if(v[j]%2==0){
            ev_++;
        }
        else{
            od_++;
        }
    }
    if(ev_==od_){
        co << "Yes "<<el;
    }
    else{
        co<<"No"<<el;
    }
    

    
     
    


}
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t;
   // cin>>t;
  //  while(t--){
  //      solve();
  //  }
    int k,s {0},j {11};
    cin>>k;
    v_int v(12);
    fovi(i,12,v);
    sv(v);
    while(j>0){
        if(s>k){
            break;
        }
        else{
            s+=v[j];
        }
        j--;
    }
    co << j << el;
    co << 11-j << el;
    


    return 0;
}
