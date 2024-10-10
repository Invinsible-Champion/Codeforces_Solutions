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

int x, n;
scanf("%d", &n);
printf("%d", n);
n /= 2;
x = (n>15)?(n=4):(n=12);
if (x < 10)
if (x < 15) printf("A");
else printf("B");
printf("C");


}


int f(){
    return 25;
} 