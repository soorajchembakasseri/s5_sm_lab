#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

int head,req_seq[100],size,track,dist,count=0;
printf("enter the current position of head");
scanf("%d",&head);
printf("enter the size of sequence");
scanf("%d",&size);
printf("enter the seuence");
	for(int i=1;i<=size;i++){
	scanf("%d",&req_seq[i]);
	track=req_seq[i];
	dist=abs(track-head);
	count=count+dist;
	head=track;
	}
printf("total seek operation=%d",count);
printf("\nordered sequence");
for(int i=1;i<=size;i++)
	{
	printf("%d\n",req_seq[i]);
	}
printf("average seektime=%d",count/size);
}
