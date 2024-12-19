#include<stdio.h>
int main()
{
	
	int a;
	printf("enetr number");
		scanf("%d",&a);
	
	int *ptr=&a;
	for(int b=1;  b<=10;  b++){
		printf("%d\n",*ptr*b);
	}
	
	
	
}
