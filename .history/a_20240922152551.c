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
    int f();
    int c=1;
    int j=(2 / 3 * 4 + 2.0 / 5 + 8 / 5)==c;
    printf("%d", j);


}


int f(){
    return 25;
}