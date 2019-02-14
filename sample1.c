#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,n;
scanf("%d",&n);
int *a=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
