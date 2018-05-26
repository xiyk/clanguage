#include <stdio.h>
main()
{
       int i, nwhite, nother, c;
       int ndigit[10];

       nwhite = nother = 0;
       for ( i = 0; i < 10; ++i)
	       ndigit[i] = 0;
       while ( (c = getchar()) != EOF)
       if (c <= '9' && c >= '0')
            ++ndigit[c - '0'];
       else if  ( c == '\n' || c == '\t' || c == ' ')
             ++nwhite;
        else
             ++nother;
        printf("digit = ");
        for ( i=0; i <= 9; ++i)
       printf("%d", ndigit[i]);
       printf(", word space = %d, other = %d\n", nwhite, nother);
          }
