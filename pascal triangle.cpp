#include <stdio.h>
int fact(int n) 
{
  int a;
    for(a=1;n>1;n--)
    a*= n;
	return a;
}
int combination(int n,int r)
{
  return fact(n)/(fact(n-r)*fact(r));
}
int main()
{
  int rows;
  int i,j;
  printf("Enter Number of Rows: ");
  scanf("%d", &rows);
  for(i=0;i<=rows;i++)
  {
    for(j=0;j<=rows-i; j++)
      printf("  ");
    for(j=0;j<=i;j++)
      printf(" %3d",combination(i, j));
    printf("\n");
  }
  return 0;
}


