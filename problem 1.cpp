#include<stdio.h>
int main() {
	int i,j,a[5][5],b[5][5]= {0},temp=0;
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++)
			scanf("%d",&a[i][j]);
	}
	b[0][0]=1;
	b[4][4]=1;
	for(i=0; i<5; i++) {
		for(j=temp; j<5; j++) 
		{
			if(((a[i][j])&&((a[i][j+1]||a[i+1][j])))==1)
			b[i][j]=1;
			
			else
			{
			temp=j-1;
			break;
			}
		}
	}
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++)
	printf("%d\t",b[i][j]);
	printf("\n");
	}
	return 0;
}