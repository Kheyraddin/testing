#include<stdio.h>
int main()
{
	int a=0,b=1,c,count,num;
	printf("Enter a number to obtain fibanocci series\n");
	scanf("%d",&num);
	printf("the series is:\n");
	printf("%d\n",a=0);
	printf("%d\n",b=1);
	count=2;
	while(count<num){
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		count++;
		
	}
	return 0;
}
