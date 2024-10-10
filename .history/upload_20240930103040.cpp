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
bool string_num_comp(string a,string b){
    if(a.length()>b.length()){
        return true;
    }
    else if(a.length()<b.length()){
        return false;
    }
    else{
        int i = 0;
        while (i<a.length())
        {
            if(a[i]!=b[i]){
                if(a[i]>b[i]) return true;
                else return false;
            }
            else{
                i++;
            }
        }
        
    }
    return true;
}


int sum_dig(int n){
    int s {0};
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int sum_dig_str(string x){
    int s {0};
    for (int i = 0; i < x.length(); i++)
    {
        s+=int(x[i]-'0');
    }
    return s;
    
}
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
   // int t;
   // cin>>t;
   // while(t--){
   //     solve();
   // }
   string n,k;
   cin>>n>>k;
   if(string_num_comp(n,k)){
    co << 1 << el;
   }
   else{
    int r = (k%n==0)?(k/n):(k/n+1);
    co << r << el;
   }
   
    return 0;
}
