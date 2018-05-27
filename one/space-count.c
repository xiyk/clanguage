#include <stdio.h>
main()
{
     int np, c;
     np = 0;
   
     while ((c = getchar()) != EOF)
             if(c == ' ')
                    ++np;
     printf("%d",np);
}
