#include <stdio.h>

int main(void) {
	// your code goes here
	int n,l,q,r;
	scanf("%d%d",&n,&q);
	long a[n],b[n],x;
	for(int i=0;i<n;i++)
	    scanf("%ld",&a[i]);
	for(int i=0;i<n;i++)
	{
	    scanf("%ld",&b[i]);
	    x=a[i]*b[i];
	    (i)?(a[i]=a[i-1]+x):(a[i]=x);
	}
	while(q--)
	{
	    scanf("%d%d",&l,&r);
	    (l!=1)?printf("%ld\n",a[r-1]-a[l-2]):printf("%ld\n",a[r-1]);
	}
	return 0;
}

