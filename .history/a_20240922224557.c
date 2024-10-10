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
        i++;
    }
    return i;
}
//int f(void);

int main()
{

    printf("%d",func("PDS 2017"));
    



}



int f(){
    return 25;
} 