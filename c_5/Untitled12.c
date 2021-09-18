#include <stdio.h>
#include <stdlib.h>



int main()
{
int i,j;

for(i=1;i<=9;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d*%d=%2d ",i,j,i*j);
    }
    printf("\n");
}
printf("\n");
for(i=9;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        printf("%d*%d=%2d ",i,j,i*j);
    }
    printf("\n");
}

	return 0;
}


