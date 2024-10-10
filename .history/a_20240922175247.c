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

if(printf("ab")<5)
printf("Hello");
else
printf("World");


}


int f(){
    return 25;
} 