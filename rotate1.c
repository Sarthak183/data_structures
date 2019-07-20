#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[]) {
	int a[argc-2];
	int i,n;
	for(i=1;i<argc-1;i++)
		a[i-1]=atoi(argv[i]);
	n=atoi(argv[argc-1]);
	int x=argc-2;
	n=n%(argc-2);
	int temp[n];
	int b=0;
	for(i=x-n;i<x;i++)
	{
		temp[b]=a[i];
		b++;
	}
	for(i=n;i>=0;i--)
	{
		a[i+n]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=temp[i];
	}
	for(i=0;i<x;i++)
		printf("%d\n",a[i]);
	return 0;
}
