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
vector<int> prime_fac(int n){
    v_int v;
    int j=2;
    while(j<=n && n!=1){

        if(is_prime(j)){
            if(n%j==0){
                v.push_back(j);
                n/=j;
            }
        }
        j++;

        
    }
    return v;
}
void solve(){
    int n;
    cin>>n;
    if(n==1){
        co << "YES" << el;
    }
    else{
        v_int p_f(prime_fac(n));
        int k=0;
        
        for(int i=0;i<p_f.size();i++){
            if(p_f[i]!=2 || p_f[i]!=3 || p_f[i]!=5){
                co << "NO" << el;
                break;
            }
            else{
                k++;

            }
        }
        if(k==p_f.size()){
            co << "YES" << el;
        }

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
