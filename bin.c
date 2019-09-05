#include<stdio.h>
int main()
{
int j,i=1,n;
scanf("%d",&n);
int bin[100];
while(n!=0)
{
if(n%2==0)
bin[i++]=0;
else
bin[i++]=1;
n=n/2;
}
for(j=i-1;j>0;j--)
printf("%d",bin[j]);
}
