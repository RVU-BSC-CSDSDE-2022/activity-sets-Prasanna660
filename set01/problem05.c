#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}

