#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char * argv[]) {
	int a=atoi(argv[1]);
	int b=0;
	int c=1;
	int d=0;
	printf("0");
	printf("1");
	while(a-2>0)
	{
		d=b+c;
		b=c;
		c=d;
		printf("%d",d);
		a--;
	}
	return 0;
}
