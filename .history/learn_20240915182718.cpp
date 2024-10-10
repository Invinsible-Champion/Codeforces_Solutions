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

bool check_equal(v_int t){
    if(t[0]==t[1] && t[1]==t[2]){
        return true;
    }
    else{
        return false;
    }
}
int max_idx(v_int t){
    int ma = 0;
    int max = t[0];
    for(int i=1;i<=2;i++){
        if(t[i]>max){
            ma = i;
            max = t[i];
        }
    }
    return ma;
}

void solve(){
    int n,c0 {0},c1 {0},c2 {0};
    cin>>n;
    v_int v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]%3==0){
            c0++;
        }
        else if(v[i]%3==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c0==c1 && c1==c2){
        co << 0 <<el;
    }
    else if((c0 == c1 && c1!=c2) || ( c1==c2 && c2!= c0) ||(c0==c2 && c2!=c1) ){
        int t1 = max(c0,c1);
        int t2 = max(t1,c2);
        int m1 = min(c0,c1);
        int m2 = min(m1,c2);
        co << t2-m2 << el;
    }
    else{
        v_int x {c0,c1,c2};
        int r {0};
        do
        {
            int l = max_idx(x);
            if(l!=2){
                x[l]--;
                x[l+1]++;
            }
            else{
                x[2]--;
                x[0]++;
            }
            r++;

        } while (!check_equal(x));
        co << r << el;



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
