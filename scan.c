#include<stdio.h>
#include<stdlib.h>
void scan(int at[20],int n,int start);
void sort(int at[20],int n);

int main()
	{
	int dq[20],n,start,i;
	printf("enter the size of queue :");
	scanf("%d",&n);
	printf("enter the queue :");
	for(i=1;i<=n;i++)
		{
		scanf("%d",&dq[i]);
		}
	printf("enter the initial head position :");
	scanf("%d",&start);
	dq[0]=start;
	++n;
	sort(dq,n);
	scan(dq,n,start);
	return 0;
	}

void scan(int at[20],int n,int start)
	{
	int i,pos,d,st=0,current;
	for(i=0;i<n;i++)
		{
		if(at[i]==start)
			{
			pos=i;
			break;
			}
		}
	printf("\nMovement of Cylinders\n");
   	 for(i=pos;i<n-1;i++) 
		{
       		 d = abs(at[i+1] - at[i]);
        	st += d;
        	printf("Move from %d to %d with seek time %d\n", at[i], at[i+1], d);
   		 }
	for(i=pos-1;i>=0;i--) 
		{
        	d = abs(at[current] - at[i]);
        	st += d;
        	printf("Move from %d to %d with seek time %d\n", at[current], at[i], d);
        	current=i;
    		}
 	printf("\nTotal Seek Time: %d", st);
  
 	printf("\nAverage Seek Time = %f",(float) st/(n-1));
 	printf("\n");
	}






	
		
	
void sort(int at[20],int n)
	{
	int i,j,temp;
	for (i=0; i<n-1; i++)
		{
   		for (j=0; j<n-1-i; j++)	
			{
      			if (at[j] > at[j+1])
				{
         			temp=at[j];
         			at[j] = at[j+1];
         			at[j+1] = temp;
      					}
   			}
		}
	}
