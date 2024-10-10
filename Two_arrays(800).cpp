#include <bits/stdc++.h>

using namespace std;
int sum_max(vector<int> a,vector<int> b,int k){
    int j=1;
    int sum{0};
    for (j = 1 ; j <=k;j++){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int swap_a = a[0];
        int swap_b = b[b.size()-1];
        if(swap_b<swap_a){
            continue;
        }
        else{
            a[0] = swap_b;
            b[b.size()-1] = swap_a;
        }
        

        
    }
    unsigned int i=0;
    while(i<a.size()){
        sum = sum + a.at(i);
        i++;
    }
    return sum;

}
int main(){
    int t;
    cin>>t;
    vector<int> res;
    for (unsigned int  i = 0; i < t; i++)
    {
        unsigned int n,k;
        cin>>n>>k;
        vector<int> a;
        vector<int> b;
        for(unsigned int j=0;j<n;j++){
            int inp_1;
            cin>>inp_1;
            a.push_back(inp_1);
        }
        for(unsigned int k=0;k<n;k++){
            int inp_2;
            cin>>inp_2;
            b.push_back(inp_2);
        }
        res.push_back(sum_max(a,b,k));


    }
    for(unsigned int  j = 0 ; j< res.size();j++){
        cout << res.at(j) <<endl;
    }
    
    return 0;
}