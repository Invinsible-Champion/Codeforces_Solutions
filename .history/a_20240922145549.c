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
   int i = 2048;
for (; ; i >>= 1)
printf("%d\n",i);


}