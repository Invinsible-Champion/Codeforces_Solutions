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
    int n;
    scanf("%d",&n);
  /*  while(n/10!=0){
        int s = 0 ;
        int x = n;
        
        while(x!=0){
        s+=x%10;
        x/=10;
        }


       n = s;
    }
*/ 
int x=n,s=0;
    while(x!=0){
        s+=x%10;
        x/=10;
        }

        n=s;
        while(n!=0){
        s+=n%10;
        n/=10;
        }

    printf("%d",sum(n));

}