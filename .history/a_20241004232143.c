#include <stdio.h>

void remove_duplicates(char str[]){
    for(int i=0;str[i]!='\0';i++){
        int idx =1;
        int j;
        for ( j = 0; j < idx; j++)
        {
            if(str[i]==str[j]) break;
        }
        if(j==idx){
            str[idx++] = str[i];

        }
        
    }
    for (int i = 0;str[i]!='\0'; i++)
    {
        printf("%c ",str[i]);
    }
    
}
int main()
{
   // func(341527);
   double a =5;
   
    return 0;
    



}
int f(int x){
    if(x==0) return 0;
    else printf("%d ",x);
    f(--x);
}