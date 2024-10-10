#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v{1,3,4,5,6};
  vector<int> a(v.begin(),v.begin()+5);
  for(int i = 0 ; i < a.size();i++){
      cout << a.at(i) << endl;
}
}