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
int f(int x);

int main()
{
    
    int num = ('a',100,'B');
    //printf("%d\a",f(5));
    f(5);
    



}
int f(int x){
    if(x==0) return 0;
    else printf("%d ",x);
    f(--x);
}