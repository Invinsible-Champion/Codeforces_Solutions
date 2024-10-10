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
   switch (10)
{
case 0:
printf("A ");
break;
default:
printf("C ");
break;
case 1:
printf("B ");

}


}