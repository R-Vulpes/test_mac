#include<stdio.h>
#include<stdlib.h>

void test(int &x) // (int &x)���Խ��޸�ֵ����
{
    x = 1024;
    printf("������ x=%d\n",x);
}

int main() 
{
    int x = 1;
    printf("����ǰ x=%d\n",x);
    test(x); 
    printf("���ú� x=%d\n",x);

    // system("pause");
    return 0;
}