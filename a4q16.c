#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<10;i=i+3)
    {

        for(j=(i*10);j<(i*10)+20;j++)
        {
            if(j%2==0)
                printf("%d\t",j);
        }

        printf("\n");



    }



}
