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
   // int len {0};
    int n, r{0};
    cin>>n;
    int z = get_len(n);
    
   for(int i =0 ;i<z;i++ ){
    if(r>=INT_MAX){
        co << "Cant be done" <<el;
        break;
    }
    int m = n/10;
    if(m==0){
        r+=(n%10)*pow(10,z-1-i);
        break;
        

    }
    else{
        r+=(n%10)*pow(10,z-1-i);
        n/=10;

    }

   }
   co << r <<el;
    


   

    


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
