#include <stdio.h>
void compareThreeNums(int num1, int num2, int num3) 
{
	if (num1 > num2 && num1 > num3) 
		printf("%d is the largest of the three numbers.\n", num1);
	else if (num2 > num3) 
		printf("%d is the largest of the three numbers.\n", num2);
	else
		printf("%d is the largest of the three numbers.\n", num3);
}

int main()
{
	int num1, num2, num3;
	
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	compareThreeNums(num1, num2, num3);
	
	return 0;
}