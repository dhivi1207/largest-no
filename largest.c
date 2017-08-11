#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter the large no%d,%d,%d",a,b,c);
	scanf("%d,%d,%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("a is big");
	}
	else if(b>c)
	{
		printf("b is big");
		
	}
else
{
	printf("c is big");
	// your code goes here
	return 0;
}
