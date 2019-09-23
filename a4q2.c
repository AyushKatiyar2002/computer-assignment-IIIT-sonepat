#include<stdio.h>
void main()
{
    int i;
    printf(" no. b/w 20 and 40 are \n");
    for(i=21;i<40;i++)
    {
     printf("%d \n",i);
    }
    printf(" even b/w 20 and 40 are \n");
    for(i=52;i<80;i++)
    {
     if(i%2==0)
     {
         printf("%d \n",i);
     }
    }
}

