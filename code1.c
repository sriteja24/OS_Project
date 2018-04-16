#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
int i,j,n,a[50],frame[10],m,k,b,c=0;
printf("\n ENTER THE NUMBER OF PAGES:\n");
scanf("%d",&n);
printf("\n ENTER THE PAGE NUMBER :\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("\n ENTER THE NUMBER OF FRAMES :");
scanf("%d",&m);
for(i=0;i<m;i++)
frame[i]= -1;
j=0;
printf("\tref string\t page frames\n");
for(i=1;i<=n;i++)
{
printf("%d\t\t",a[i]);
b=0;
for(k=0;k<m;k++)
if(frame[k]==a[i])
b=1;
if (b==0)
{
frame[j]=a[i];
j=(j+1)%m;
c++;
for(k=0;k<m;k++)
printf("%d\t",frame[k]);
}
printf("\n");
}
printf("Page Fault Is %d",c);
return 0;
}
