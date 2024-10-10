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
    int i = 1;
    switch(i)
    {
        case 1:
        case 2: printf("2");
        
    }


}


int f(){
    return 25;
} 