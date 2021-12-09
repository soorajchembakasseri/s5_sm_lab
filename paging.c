#include<stdio.h>
#include<stdlib.h>
int main(){
	int nop,psize,i;
	int *sta;
	printf("enter no.of pages");
	scanf("%d",&nop);
	printf("enter the size");
	scanf("%d",&psize);
	sta=(int*)malloc(nop);
	for(i=0;i<nop;i++){
	sta[i]=(long)malloc(psize);
	printf("page %d\taddres%u\n",i+1,sta[i]);
		}
return 0;
}

