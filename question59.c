//Q59: Count even and odd numbers in an array.
#include<stdio.h>
int main()
{
    int n,m=0,c=0;
    int arry[n];
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        printf("enter the value \n");
        scanf("%d",&arry[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        if(arry[i]%2==0)
        {
            m=m+1;
        }
        else
        {
            c=c+1;
        }

    }
    printf("no of even no %d",m);
    printf("no of odd no %d",c);
    return 0;
}