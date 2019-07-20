#include<stdio.h>
#include<stdlib.h>
int fibbo(int n) {
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return(fibbo(n-1)+fibbo(n-2));
}
int main(int argc, const char * argv[]) {
	int a = atoi(argv[1]);
	int b=0;
	while(a>0)
	{
		printf("%d",fibbo(b));
		b++;
		a--;
	}
	return 0;
}
