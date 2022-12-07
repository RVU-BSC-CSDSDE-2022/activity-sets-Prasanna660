
#include <stdio.h>

int add (int a, int b);
int main(void) 
{
    int num1, num2, sum;
  printf("Enter first number: ");
    scanf("%d", &num1);
  printf("Enter second number: ");
    scanf("%d", &num2);
    sum = add(num1, num2);
  printf("Sum of two numbers = %d\n", sum);
    return 0;
}
int add(int a, int b) 
{
    int result;
    result = a + b;
    return result;
}