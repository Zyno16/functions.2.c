#include <stdio.h>
#include <stdlib.h>
 int t_cube (int n){

 return n*n*n;
 }
int main()
{
   int n;
   printf("enter n number");
   scanf("%d",&n);
  printf("%d",t_cube(n));

    return 0;
}
