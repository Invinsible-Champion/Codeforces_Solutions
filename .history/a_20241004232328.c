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
   char str[100] = {'m','s','t','t','i'};
   remove_duplicates(str);



}
