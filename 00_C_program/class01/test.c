#include <stdio.h>
// �������ע��
// int main()
// {
//     printf("%zu\n",sizeof(char));
//     printf("%zu\n",sizeof(short));
//     printf("�������\n");
//     return 0;
// }

int main()
{
    int input = 0;
    printf("�������\n");
    printf("��Ҫ�ú�ѧϰ��(0/1)��\n");
    scanf("%d", &input);
    if (input == 1)
    {
        printf("��offer\n");
    }
    else
    {
        printf("������\n");
    }
    return 0;
}