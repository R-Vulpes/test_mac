#include<stdio.h>
#include<stdlib.h>

int main()
{
  int len = 0;
  char d = 'a';
  scanf("%d", &len);
  char *c = (char*)malloc(len);
  scanf("%c", &d); //�˴��������߻�������\n��ȥ����������
  fgets(c,len,stdin); //gets�������׷���Խ��
  puts(c);
  free(c);
//   system("pause");
  return 0;
}