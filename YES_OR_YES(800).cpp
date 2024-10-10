#include <iostream>
#include <string>
#include <vector>
#include <string.h>
using namespace std;
string lower(string inp){
    string response;
    int len = inp.length();
    for (size_t i = 0; i < len; i++)
    {
        response[i] = tolower(inp[i]);

    }
    return response;
    
}
int main(){
    int t;
    cin>>t;
    vector<string> res;
    for (size_t j = 0; j < t; j++)
    {
        string s;
        cin>>s;
        string s_low = lower(s);
        if (s_low[0]=='y'&&s_low[1]=='e'&&s_low[2]=='s')
        {
           res.push_back("YES");

        }
        else{
           res.push_back("NO");
        }
        


    }
    for(int k=0;k<t;k++){
        cout<<res.at(k)<<endl;
    }
    

    return 0;
}
