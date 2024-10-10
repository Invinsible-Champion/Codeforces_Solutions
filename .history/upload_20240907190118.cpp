#include <bits/stdc++.h>
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
int get_len(int x){
    int j {1},len{0},n=x;
    while(j>0){
       int m=n/10;
       if(m==0){
        return len+1;
        
       }
       else{
        len++;
        n/=10;
       }
    }
    return -1;

}

void solve(){
    int x,y;
    cin>>x>>y;
    if(x>=2*y || y>=2*x){
        co << 0 << el;
    }
    else{
        int m1  = (max(x,y)%2==0)?(max(x,y)/2  - min(x,y)):(1+);
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
