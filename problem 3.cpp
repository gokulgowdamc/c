#include<stdio.h>
int main()
{
	int n1,i,j,n2,arr[100],brr[100],unions[100],intersection[100],k=0,l=0,count=0,c=0,d=0;
	scanf("%d%d",&n1,&n2);
	for(i=0;i<n1;i++)
	scanf("%d",&arr[i]);
	for(j=0;j<n2;j++)
	scanf("%d",&brr[j]);
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(arr[i]==brr[j])
			{
				intersection[k++]=arr[i];
				unions[l++]=arr[i];
			}
			if(brr[i]==arr[j])
			c++;
			if(c==0)
			{
				unions[l++]=brr[i];
			}
		}
		c=0;
	}
	for(i=0;i<=l;i++)
	printf("%d ",unions[i]);
	for(i=0;i<=k;i++)
	printf("%d ",intersection[i]);
	return 0;
}