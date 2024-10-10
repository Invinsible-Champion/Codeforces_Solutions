#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
bool make_name(string input,string target){
    auto inp_len = input.length(); 
    auto target_len = target.length();
    int flag{0};
    for (size_t i = 0; i < target_len; i++)
    {
      for (size_t j = 0; j < inp_len; j++)
      {
         
            if (target[i]==input[j])
            {
                flag++;
                break;
            }
            else{
                continue;
            }
      }
      
        
        
    }
    if(flag==target_len){
        return true;

    }
    else{
        return false;
    }
    



}
int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1.length()+s2.length()==s3.length()){
    bool val1 = make_name(s3,s1);
    if(val1){
        vector<char> rest_str;
        for(int k=0;k<s3.length();k++){
            int alarm{0};
            for (int l = 0; l < s1.length(); l++)
            {
                if(s3[k]!=s1[l]){
                    rest_str.push_back(s3[k]);
                    
                }
                else{
                    if(alarm>=2){
                        rest_str.push_back(s3[k]);
                    }
                    alarm++;

                }
            }
            
        }
        string new_s2(rest_str.begin(),rest_str.end()) ;
        cout<<new_s2<<endl;



    }
    bool val2 = make_name(s3,s2);
   /* if(val1 && val2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
*/
    }
 /*   else{
        cout<<"NO";
    }
   

  */

    return 0;
}