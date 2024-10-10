#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    printf("%d\t%d",(n-n%10)/10,n%10);
}