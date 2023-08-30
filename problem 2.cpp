#include<stdio.h>
int main()
{
	int k,n,arr[100],i,j,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&k);
	for(i=0;i<=n-k;i++)
	{
		for(j=i;j<i+k;j++)
		{
			if(max<arr[j])
			max=arr[j];
		}
		printf("%d\t",max);
		max=0;
	}
	return 0;
}