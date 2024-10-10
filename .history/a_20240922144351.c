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
   int a = 10, b=5;
   float c = a+b;
   printf("%f", c);

}