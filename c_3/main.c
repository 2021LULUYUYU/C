#include <stdio.h>

int main()
{
    int a[]={1,2,9,3,-9,22,443,32};
    int i=0;
    int max=0;
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
