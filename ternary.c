#include <stdio.h>
int main()
{
  int n1,n2,larger;
  printf("Enter two num :");
  scanf("%d%d",&n1,&n2);
  larger = n1 > n2 ? n1 : n2;
  printf("Larger number is: %d\n",larger);
}