#include <stdio.h>
#define IN 1
#define OUT 0
main()
{
  int nc, nw, nl, c, state;
  state = OUT;
  nc = nw = nl;
  while ((c = getchar()) != EOF)
         ++nc;
      if(c = '\n')
         ++nl;
      if(c == ' '|| c == '\n'|| c == '\t')
           state = OUT;
        else if (state == OUT)
         {  
           state = IN;
            ++nw;}
   printf("%d %d %d\n", nw, nc, nl);
}
