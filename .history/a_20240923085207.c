#include <stdio.h>
int sum(int n){
    int s = 0 ;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int func(char A[]){
    int i=0;
    while(A[i]){
        i=i+1;
    }
    return i;
}
int f(i);

int main()
{
    int num = ('a',100,'B');
    printf("%d\a",num);
    



}



int f(){
    return 25;
} 