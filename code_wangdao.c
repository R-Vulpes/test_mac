#include<stdio.h>
#include<stdlib.h>

int main()
{
  int len = 0;
  scanf("%d", &len);
  char *c = (char*)malloc(len);
  gets(c);
  puts(c);
  free(c);
//   system("pause");
  return 0;
}