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
    while(n/10!=0){
        n = sum(n);


    }
    printf("%d",sum(n));

}