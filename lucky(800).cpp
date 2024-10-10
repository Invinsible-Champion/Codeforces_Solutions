#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    cin>>n;
    unsigned int j = 1;
    int flag {0};
    while (j<n.length()+1)
    {
        if (n[j] !='4')
        {
            flag++;
           break;
        }
        else if(n[j]!='7'){
            flag++;
            break;
        }
        else{
            continue;
        }
        j++;
    }
    if (flag>=1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
    
    return 0;
}