#include <iostream>
using namespace std;
int main(){
    string check = "codeforces";
    int t;
    cin>>t;
    string res[t];
    char inp;
    
    for (size_t i = 0; i < t; i++)
    {
        int flag {0};
        cin>>inp;
        for (size_t j = 0;j<check.length() ;j++)
        {
            if(check[j]==inp){
                flag++;
            }
            else{
                continue;
            }
        }
        if (flag>=1){
            res[i]="YES";
        }
        else{
            res[i]="NO";
        }
        
        
        
    }
    for(auto elem:res){
        cout<<elem<<endl;
    }
    
    return 0;
}