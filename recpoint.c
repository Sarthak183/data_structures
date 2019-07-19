#include<stdio.h>
#include<stdlib.h>
void reverse(int *a,int i,int j) {
	int x;
	if(i<j)
	{
	        x=a[j-1];
        	a[j-1]=a[i];
        	a[i]=x;
		reverse(a,i+1,j-1);
	} 
	else
		return;
}
int main(int argc,const char *argv[]) {
	int a[argc-1],i;
	for(i=1;i<argc;i++)
		a[i-1]=atoi(argv[i]);
	reverse(a,0,argc-1);
	for(i=0;i<argc-1;i++)
		printf("%d",a[i]);
	return 0;
}
