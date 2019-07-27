#include<stdio.h>
#include<string.h>
int main(void) {
	char str[15]="hello world";
	char str1[]="hello world";
	char str2[]= { 'h', 'e' , 'l' , 'l' , 'o' , ' ' , 'w','o','r','l','d','\0'};
        char *str3 = "hello";
	printf("%s\n", str);
	puts(str);
	printf("%s\n",str1);
	puts(str1);
	printf("%s\n",str2);
	puts(str2);
	printf("%s\n",str3);
	puts(str3);
	printf("%ld",strlen(str2));
	return 0;
}
