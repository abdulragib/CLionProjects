#include<stdio.h>
int main()
{

int *p,sum=0;
int n;
printf("enter size of block\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
{
printf("%d ",(p+i));//&p[i]
}
printf("\n");
for(int i=0;i<n;i++)
{
printf("%d ",p[i]);
}
printf("\n enter values as per size of n\n");
for(int i=0;i<n;i++)
{
scanf("%d",(p+i));//&p[i]
}
for(int i=0;i<n;i++)
{
printf("%d ",*(p+i));
sum=sum+ *(p+i);

}
printf("\n sum=%d",sum);

return 0;

}