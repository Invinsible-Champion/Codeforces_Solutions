#include <stdio.h>
int sum(int n){
    int s = 0 ;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
//int f(void);
void main(){

int a=5;
a=(a,a);
printf("%d",a);



}


int f(){
    return 25;
} 