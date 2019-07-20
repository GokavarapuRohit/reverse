#include <stdio.h>
#include<string.h>
int main()
{
   char b[10],j[10];
gets(b);
gets(j);
strcat(b,j);
printf("%s",b);

}
