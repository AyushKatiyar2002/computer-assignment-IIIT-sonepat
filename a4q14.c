#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<10;i++)
    {

        for(j=(i*10);j<(i*10)+10;j++)
        {
            if(i%2==0)
            {
                if(j%2!=0)
                    printf("%d",j);


            }
            else
            {

                if(j%2==0)
                    printf("%d",j);
            }
        }

        printf("\n");



    }



}
