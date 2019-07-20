#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int r,c=0;
	scanf("%d",&r);
	r=r%n;
	for(i=0;i<r;i++)
	{
		c=a[n-1];
		for(j=n-1;j>0;j--)
			a[j]=a[j-1];
		a[0]=c;

	}
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
	
