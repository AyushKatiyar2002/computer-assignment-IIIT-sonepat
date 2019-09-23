#include<stdio.h>
void main()
{
    int i;
    printf(" even no. less than 50 \n");
    for(i=2;i<50;i++)
    {
     printf("%d \n",i);
    }
    printf(" odd no. greater then 50 \n");
    for(i=51;i<i+1;i++)
    {
     if(i%2!=0)
     {
         printf("%d \n",i);
     }
    }
}

