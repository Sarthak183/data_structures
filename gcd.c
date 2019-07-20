#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	int arr[argc-1];
	int i;

	for(i=1; i<argc; i++)
		arr[i-1] = atoi(argv[i]);

        int  min=arr[0];
	for(i=0; i<argc-1; i++)
		if(arr[i] <= min)
			min=arr[i];

	printf("%d\n", min);

	int p,c=0;
	for(i=0;i<argc-1;i++)
		{
			if(arr[i]%min==0)
			{
				p=min;
				c=c+1;
				if(c==(argc-1))
				{
					break;
				}
				
			}
			else
			{
				min=min-1;
			}
		}
	printf("%d",p);
	return 0;
}

