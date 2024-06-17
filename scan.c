#include<stdio.h>
void main()
{
 int i,j,dir,size,n,req[50],temp,total,init;
 printf("Enter the number of request\n");
 scanf("%d",&n);
 printf("Enter the request sequence\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&req[i]);
 }
 printf("Enter the disk size\n");
 scanf("%d",&size);
 size=size-1;
 printf("Enter the initial head poistion");
 scanf("%d",&init);
 printf("Enter the direction of movement \n0 for left to right\n1 for right to left\n");
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
 if(dir==0)
 {
  total=(size-init)+(size-req[0]);
 }
 else
 {
  total=init+req[n-1];
 }
printf("The total disk movement is %d\n",total);
}

