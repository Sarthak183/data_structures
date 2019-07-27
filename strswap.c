#include<stdio.h>
#include<string.h>
int main(void) {
	char a[50];
	char b[50];
	scanf("%s",a);
	scanf("%s",b);
	char c[50];
	strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
	printf("%s",a);
	printf("%s",b);
	return 0;
}
