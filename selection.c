#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],i,j,temp,maxpos;
    for(i=0;i<100;i++)
        arr[i]=rand();
    for(i=100-1;i>0;i--)
    {
        maxpos=0;
        for(j=1;j<=i;j++)
        {
             if(arr[maxpos]<arr[j])
            {
                maxpos=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[maxpos];
        arr[maxpos]=temp;
           
    }
    for(i=0;i<100;i++)
        printf("%d\n",arr[i]);
    return 0;
}
