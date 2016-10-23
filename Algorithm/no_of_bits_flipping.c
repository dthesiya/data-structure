#include<stdio.h>

int a,b,c;


int bits(int c)
{
	int count = 0;
	while(c)
	{
		c = c & (c-1);
		count++;
	}
return count;
}




int main()
{
	printf("enter a:");
	scanf("%d",&a);
	printf("\n");
	printf("enter b:");
	scanf("%d",&b);

	c = a^b;

	printf("no of bits need to be changed is:%d\n", bits(c));

	return 0;

}
