#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[]) {
	int a[argc-1];
	int i;
	for(i=1;i<argc;i++)
		a[i-1]=atoi(argv[i]);
	int *ptr=a;
	int b[argc-1];
	for(i=0;i<argc-1;i++)
		b[argc-2-i]=*(ptr+i);
	for(i=0;i<argc-1;i++)
		printf("%d",b[i]);
	return 0;
}
