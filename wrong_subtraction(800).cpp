#include <iostream>
using namespace std;
int main(){
    long long int n,res {0},k;
    cin>>n>>k;
    for (int i = 0; i < k; i++)
    {
        if (n%10==0)
        {
            res = n/10;
            n = res;
          


        }
        else{
            res = (n-1);
            n = res;
               

        }
              
    }
    cout<<res<<endl;
    
    return 0;
}