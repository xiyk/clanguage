#include <stdio.h>
int power(int m, int n);
main ( )
{
  int i;
  for ( i = 0; i < 10; ++i)
  printf("%d %d %d\n", i, power(4, i), power(2, i));
   return 0;
}
int power(int base, int n)
{
     int p, i;
        p = 1;
     for (i = 1; i <= n; ++i)
        p = base * p;
       return p;
     }
