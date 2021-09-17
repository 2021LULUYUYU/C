#include <stdio.h>

int main()
{
    int a[]={2,77,3,21,0,88,374,32,274,72,5};
    int i=0;
    int temp;
    int j=sizeof(a)/sizeof(a[0])-1;
    while(i<j)
    {

        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        ++i;
        --j;
    }
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
         printf("%d\n",a[i]);

    }

    return 0;
}
