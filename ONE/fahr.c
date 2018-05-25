#include <stdio.h>
int main()
{ 
       int upper, lower, step;
       float fahr, celsius;
       upper = 300;
       lower = 0;
       step  =20;
       fahr  = lower;
        
printf("摄氏度与华氏度对照表\n");
       while ( fahr <= upper )
       { 
           celsius = 5.0 * ( fahr - 32.0 ) / 9.0;
           printf("%3.0f\t%6.1f\n", fahr, celsius);
            fahr = fahr + step;
        }
}
