#include <stdio.h>
int sum(int n){
    int s = 0 ;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
void main(){
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(j==5){
                break;
            }
            else{
                printf("%d ",j);
            }
            
        }
        printf("\n");
    }


}