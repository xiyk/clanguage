#include <stdio.h>
main ()
{
         int fahr;
         printf("华氏度与摄氏度的转换\n");
         for (fahr = 300; fahr >= 0; fahr = fahr - 20)
          printf("%5d\t%9.1f\n", fahr, 5.0 * (fahr -32) / 9.0);
}
