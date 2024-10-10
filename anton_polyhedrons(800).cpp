#include <iostream>
using namespace std;
bool check_string(string s, string t){
    unsigned int len_s = s.length();
    unsigned int len_t = t.length();
    if(len_s!=len_t){
        return false;
    }
    else{
        unsigned int flag {0};
        for(unsigned int i = 0 ; i<len_s;i++){
            if(s[i]==t[i]){
                flag++;
            }
            else{
                continue;
            }
        }
        if(flag==len_s){
            return true;
        }
        else{
            return false;
        }

    }
    return false;
}
int main(){
    int n,faces {0};
    cin>>n;
    for (unsigned int j = 0; j < n; j++)
    {
        string inp;
        cin>>inp;
        if(check_string(inp,"Tetrahedron")){
            faces = faces +4;
        }
        else if(check_string(inp,"Cube")){
            faces = faces +6;
        }
        else if(check_string(inp,"Octahedron")){
            faces = faces +8;
        }
        else if(check_string(inp,"Dodecahedron")){
            faces = faces +12;
        }
        else{
            faces = faces + 20;
        }

    }
    cout << faces ;

}