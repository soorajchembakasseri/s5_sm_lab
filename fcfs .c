#include<stdio.h>
#include<stdlib.h>
int main()
	{
	int dq[20],n,i,st=0,d;
	printf("enter the size of the block");
	scanf("%d",&n);
	printf("enter the queue :");
	for(i=1;i<=n;i++)
		{
		scanf("%d",&dq[i]);
		}
	printf("enter the initial head position :");
	scanf("%d",dq[0]);
	printf("\nmovement of cylinders\n");
	for(i=0;i<n;i++)
		{
		d=abs(dq[i+1]-dq[i]);
		st+=d;
		printf("move from%d to%d with seektime %d\n",dq[i],dq[i+1],d);
		}
	printf("\ntotal seektime:%d",st);
	printf("\naverage seektime=%f",(float)st/n);
	printf("\n");
	return(0);
	}
