#include<stdio.h>
void main() {
 int n,mid,l,r;
 int p,y;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++) {
   scanf("%d",&a[i]);
 }
 l=0;
 r=n-1;
 mid=n;
 int pos,b;
 scanf("%d",&b);
 while(l<=r) {
 mid=l+(r-1)/2;
 if(b<a[mid])
 r=mid-1;
 else if(b>a[mid])
 l=mid+1;
 else  {
 pos=mid;
 break;
 }
 }
 printf("%d",pos);
}
