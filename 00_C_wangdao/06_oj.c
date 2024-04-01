#include<stdio.h>
#include<stdlib.h>

int main()
{
  int len = 0;
  char d = 'a';
  scanf("%d", &len);
  char *c = (char*)malloc(len);
  scanf("%c", &d); //此处用来读走缓冲区的\n，去掉结果会错误
  fgets(c,len,stdin); //gets函数容易访问越界
  puts(c);
  free(c);
//   system("pause");
  return 0;
}