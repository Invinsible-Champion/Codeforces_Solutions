#include <bits/stdc++.h>
using namespace std;
#define pb(x,name) name.push_back(x)
#define sw(a,b) swap(a,b)
#define co cout
#define el endl
#define foi(i,l,r) for(int i=l;i<=r;i++)
#define fovi(i,len,name) for(int i=0;i<=len-1;i++){ cin>>name[i];}
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

bool same_swap(string x,string t,int id_1,int id_2){
         swap(x[id_1],t[id_2]);
         if(x==t){
            return true;
         }   
         else{
            return false;
         }
}
/*
void solve(){
    
}
*/


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //int t;
    //cin>>t;
    //while(t--){
    //    solve();
    //}
    int n,i {0};
    cin>>n;
    vector<vector<int>> v(n);

    for(;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});



    }
    i=0;
    int r,l,u,l_l;
    r=l=u=l_l=0;
    int ans {0};
    for (; i < n; i++)
    {
        int j=0;
        for(;j<n&&j!=i;j++){
            if(v[j][0]>v[i][0] && v[j][1]==v[i][1]){
                if(r>=1) continue;
                else r++;

            }
            else if(v[j][0]<v[i][0] && v[j][1]==v[i][1]){
                if(l>=1) continue;
                else l++;

            }
            else if(v[j][0]==v[i][0] && v[j][1]<v[i][1]){
                if(l_l>=1) continue;
                else l_l++;

            }
            else{
                if(u>=1) continue;
                else u++;

            }

            
        }
        if(r==1 && u==1 && l==1 && l_l==1){
            ans++;
        }
        

    }
    co << ans << el;
    

    return 0;
}
