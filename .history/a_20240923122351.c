#include <stdio.h>
int sum(int n){
    int s = 0 ;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int func(int n){
    if(n<10){
        printf("%d ",n);

    }
    else{
        printf("%d ",n%10);
        func(n/10);
        printf("%d ",n%10);
    }
}


int main()
{
    func(341527);
    return 0;
    



}
int f(int x){
    if(x==0) return 0;
    else printf("%d ",x);
    f(--x);
}