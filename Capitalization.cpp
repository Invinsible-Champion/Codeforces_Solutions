#include <iostream>

using namespace std;
int main(){
    string inp;
    cin>>inp;
    char cap = toupper(inp[0]);
    inp[0] = cap;
    cout<<inp;
    return 0;
    

}