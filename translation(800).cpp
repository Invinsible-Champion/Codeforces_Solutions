#include <iostream>

#include <string.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int n = a.length();
    char temp[n];
    for (unsigned int  i = 0; i < n; i++)
    {
        temp[i]= a[n-1-i];
    }
    unsigned int flag {0};
   
    for (unsigned int j = 0; j < n; j++)
    {
        if (b[j]==temp[j])
        { 
            flag++;
            
        }
    }
    
    if(flag==a.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
   
}