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

for (int i = 1; i < 21; i++)
{
if (i % 3 != 0)
break;
printf("%d ", i);
}



}


int f(){
    return 25;
} 