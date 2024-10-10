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
        case 3: printf("3");
        case 4: printf("4");

    }


}


int f(){
    return 25;
} 