#include <iostream>
using namespace std;
int main(){
    int n;
    string inp;
    cin>>n;
    cin>>inp;
    int ant {0},dan {0};
    for (int i = 0; i < n; i++)
    {
        if(inp[i]=='A'){
            ant++;

        }
        else{
            dan++;
        }
    }
    if (ant>dan)
    {
        cout<<"Anton"<<endl;
    }
    else if(ant<dan){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    
    
}