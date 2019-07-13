#include<stdio.h>
void main()
{
  int n,i,pos,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  scanf("%d",&pos);
  for(i=0;i<n;i++)
  {
    if(a[i]==pos)
	{
	  j=i;
	}
  }
   printf("%d",j);
}
