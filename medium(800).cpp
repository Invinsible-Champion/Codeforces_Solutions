#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int t;
    int arr[3];
    
    
    cin>>t;
    int res[t];
    

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+3);
        res[i] = arr[1];
       
    }
    for (int k = 0; k<t; k++)
    {
        cout<<res[k]<<endl;
    }
    
}