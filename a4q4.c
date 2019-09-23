#include<stdio.h>
void main()
{
    int i;
    printf(" even no. bw 20 and 40 \n");
    for(i=22;i<40;i++)
    {
     if(i%2==0)
     {
     printf("%d \n",i);
     }
    }
    printf(" odd no. bw 50 and 80 \n");
    for(i=51;i<80;i++)
    {
     if(i%2!=0)
     {
         printf("%d \n",i);
     }
    }
}

