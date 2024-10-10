#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> inp,int n){
    int counter {0};

    for(unsigned int i = 1;i<=n;i++){
        
        for(unsigned int j = 0;j<inp.size();j++){
            if(i==inp.at(j)){
                counter++;
               
                
            }
            else{
                continue;
            }
        }
       
       

    }
    
     if(counter == n){
            return true;
        }
        else{
            return false;
        }
        return false;
    
   
}

int main(){
    int n,p_i,q_i;
    cin>>n;
    
    vector<int> p;
    
    cin>>p_i;
    for(unsigned int j = 0;j<p_i;j++){
        int input;
        cin>>input;
            
        p.push_back(input);
        
        
    }
    cin>>q_i;
     for(unsigned int k = 0;k<q_i;k++){
        int input_1;
        cin>>input_1;
            
        p.push_back(input_1);       
        
    }

vector<int>::iterator ip;
sort(p.begin(),p.end());
    ip = unique(p.begin(),p.begin()+p.size());
    p.resize(distance(p.begin(),ip));
  
   
    if(check(p,n) == true){
        cout << "I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    




}