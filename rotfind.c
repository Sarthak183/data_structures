#include<stdio.h>
#include<stdlib.h>
int main(int argc , const char * argv[]) {
	int n=argc-1;
	int a[n];
	int i;
	for(i=1;i<argc;i++)
	{
		a[i-1]=atoi(argv[i]);
	}
	int x,j;
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			{
				if((a[i] + a[j]) == x)
					printf("%d %d\n",a[i],a[j]);
			}
	}
	return 0;
}
		
