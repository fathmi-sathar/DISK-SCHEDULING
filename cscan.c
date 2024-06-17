#include<stdio.h>
void main()
{
 int i,j,init,req[50],total,point,point1,n,size,dir,temp;
 printf("Enter the number of request\n");
 scanf("%d",&n);
 printf("Enter the request sequence\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&req[i]);
 }
 printf("Enter the size\n");
 scanf("%d",&size);
 size=size-1;
 printf("Enter the initial head position\n");
 scanf("%d",&init);
 printf("Enter the direction\n0 for left to right\n1 for right to left\n");
 scanf("%d",&dir);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(req[j]>req[j+1])
   {
    temp=req[j];
    req[j]=req[j+1];
    req[j+1]=temp;
   }
  }
 }
point=init;
point1=init;
for(i=0;i<n;i++)
{
 if(req[i]>point)
 {
  point=req[i];
  break;
 }
}
for(i=0;i<n;i++)
{
 if(req[i]>point1)
 {
  point1=req[i-1];
  break;
 }
}
if(dir==0)
{
 total=(size-init)+size+point1;
}
else
{
 total=(size-point)+size+init;
}
printf("The total head movement is %d\n",total);
}



