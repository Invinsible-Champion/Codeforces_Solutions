#include <bits/stdc++.h>
using namespace std;
int ones(vector<int> num){
    int flag {0};
    for(int i = 0; i < num.size(); ++i) {
        if (num.at(i)==1) {
            flag++;
        }

    }
    return flag;
}

void solve(){
    int n,k,r {0};
    cin>>n>>k;
    vector<int> arr;
    for (int j = 0; j < k; j++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int one = ones(arr);
    sort(arr.begin(),arr.end());
    int x = n - arr.at(arr.size()-1);
    if(x==one){
        cout << one << endl;

    }
    else {
        cout << x + (x-one)-1 <<endl;

    }


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        solve();
    }


    return 0;
}