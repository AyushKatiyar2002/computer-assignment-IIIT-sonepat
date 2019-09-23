#include<stdio.h>
void main()
{
    int i;
    printf("no. bw 50 and 70 \n");
    for(i=1;i<100;i++)
    {
        if(i> 50 && i<70)
        {
            printf("%d \n",i);
        }
    }
    printf("no. less than 20 are \n");
    for(i=1;i<100;i++)
    {

        if(i<20)
        {
            printf("%d \n",i);
        }
    }
    printf("no. greater than 90 are \n");
    for(i=1;i<i+1;i++)
    {

        if(i>90)
        {
            printf("%d \n",i);
        }
    }
}

