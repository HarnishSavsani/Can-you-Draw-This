#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=6; i++)
    {
        k=0;
        for(j=1; j<=12; j++)
        {
           if(j<=i*2)
           {
               printf("%d",k);
               k==0?k++:k--;
           }
           else
           {
               printf(" ");
           }
        }
        printf("\n");
    }


    return 0;
}
