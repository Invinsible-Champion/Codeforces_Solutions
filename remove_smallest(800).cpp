#include <bits/stdc++.h>
using namespace std;
/*
bool remove_mod(vector<int> input){
    for(unsigned int m = 0 ; m < input.size();m++){
        for(unsigned int n = m+1 ; n<input.size();n++){
            int check_val = input.at(m) - input.at(n);
            if(check_val ==1 || check_val == -1){
                input.erase(input.begin()+m);

            }
            else{
                continue;
            }
        }
    }
    if(input.size()==1){
        return true;
    }
    else{
        return false;
    }
    return false;
}
*/

int main(){
    int t;
    cin>>t;
    vector<string> res;
    for (unsigned int  i = 0; i < t; i++)
    {
        unsigned int n;
        cin >> n;
        vector<int> arr;
        for(unsigned int j=0;j<n;j++){
            int input;
            cin>>input;
            arr.push_back(input);
        }
        vector<int>::iterator iter;
        iter = unique(arr.begin(),arr.end());
        arr.resize(distance(arr.begin(),iter));
        //cout << "Before:  " << arr.size()<<endl; 
        //code
        unsigned int k = 0 ;

        while(k<arr.size()){
            int counter {0};
            for(unsigned int m = k+1 ; m<arr.size();m++){
                
                int val = arr[k] - arr[m];
                if(val==1 || val == -1){
                    arr.erase(arr.begin()+k);
                    counter ++ ; 
                    
                    break;
                }
                else{
                    continue;
                }
            }
            if(counter == 1){
                cout << "Something was found: " <<endl;
                k=0;
            }
            else{
                cout << "Nothing found :"<<k <<endl;
                k++;
            }

        }
        cout << "Size "<<arr.size()<<endl;
          if(arr.size()==1){
            res.push_back("YES");
        }
        else{
            res.push_back("NO");
        }


    }
    for(unsigned int k = 0;k<res.size();k++){
    cout<<res.at(k)<<endl;
    }
            

        }
        


        
  



    

    
    
