#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        
        cin>>arr[i];
    }
    for (int j = 0; j<t; j++)
    {
        if (arr[j]<=1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if (1400<=arr[j] && arr[j]<=1599)
        {
            cout<<"Division 3"<<endl;
        }
         else if (1600<=arr[j] && arr[j]<=1899)
        {
            cout<<"Division 2"<<endl;
        }else{
            cout<<"Division 1"<<endl;
        }
        
    }
    
    

}