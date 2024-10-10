#include <stdio.h>
void main(){
    for (int  i = 1 ; i<=5; i++)
    {
        int l = (10-(2*i))/2;
        for (int k = 1; k <= l; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= 2*i - 1; j++)
        {
            printf("*");
        }
        for (int m = 1; m <= l; m++)
        {
            printf(" ");
        }
        printf("\n");
        
        
    }
    
}