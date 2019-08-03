#include<stdio.h>
void rotateby90(int n,int a[n][n],int b[n][n]) {
	int i,j,k;
	int c[n];
	for(i=0;i<n;i++)	{
		for(j=0;j<n;j++)
			c[j]=a[i][j];
		for(k=0;k<n;k++)	
			b[k][n-1-i]=c[k];	}

	for(i=0;i<n;i++)	{
		for(j=0;j<n;j++)	
			printf("%d ",b[i][j]);
		printf("\n");
	}
}
int main(void) {
	int i,n,j;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	for(i=0;i<n;i++)	{
		for(j=0;j<n;j++)	{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	rotateby90(n,a,b);
	return 0;
}
