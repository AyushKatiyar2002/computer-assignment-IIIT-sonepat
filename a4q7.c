#include<stdio.h>
void main()
{
    int i;
    printf("even no. but not a multiple of 3 and 5 \n");
    for(i=1;i<i+1;i++)
    {
        if(i%2==0 && i%3!=0 && i%5!=0)
        {
            printf("%d \n",i);
        }
    }
}

