#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[]) {
	int a[argc-1];
	int t=0,i;
	for(i=1;i<argc;i++)
	{
		a[t]=atoi(argv[i]);
		t++;
	}
	for(i=0;i<argc-1;i++)
		printf("%d\n",a[i]);
 	return 0;
}
