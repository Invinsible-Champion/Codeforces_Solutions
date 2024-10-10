#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[10] = {1,1,1,1,1,1,1,1,1};
    int largest {arr[0]}, sec_lar {-1};
    for (int i = 1; i < sizeof(arr)/sizeof(int); i++)
    {
        int temp = largest;
        if(arr[i]>largest){
            largest = arr[i];
            if(sec_lar<temp){
                sec_lar = temp;
            }
        }    


    }
    cout << "The largest element is : " << largest << endl;
    cout << "The second largest element is : " << sec_lar << endl;




    
    
    return 0;
}