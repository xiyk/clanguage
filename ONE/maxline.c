#include <stdio.h>
#define MAXLINE 1000
int getln(char line[], int maxline);
void copy(char to[] , char from[]);
 main( )
{
  int len; /*当前行长度*/
  int max;  /*目前最长行数*/
  char line[MAXLINE];   /*当前行内容*/
  char longest[MAXLINE];

   max = 0;
   while ((len = getln(line, MAXLINE)) > 0)
         if( len > max)
         { 
         max = len;
         copy(longest , line);
         }
       if (max > 0)
       printf("%s", longest);
     return 0;
  }
int getln(char s[], int lim)
   {
    int c, i;
    for (i = 0; i < lim  - 1 && ( c = getchar()) != EOF && c!='\n'; ++i)
           s[i] = c;
      if( c == '\n')
         {   s[i] = c;
            ++i;
         }
         s[i] = '\0';
         return i;
  }

      void copy(char to[], char from[])
   {
    int i;
     i = 0;
     while ((to[i] = from[i]) != '\0')
             ++i;
} 




