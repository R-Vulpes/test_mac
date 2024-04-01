#include <stdio.h>
// 你的中文注释
// int main()
// {
//     printf("%zu\n",sizeof(char));
//     printf("%zu\n",sizeof(short));
//     printf("我在这儿\n");
//     return 0;
// }

int main()
{
    int input = 0;
    printf("加入比特\n");
    printf("你要好好学习吗(0/1)？\n");
    scanf("%d", &input);
    if (input == 1)
    {
        printf("好offer\n");
    }
    else
    {
        printf("卖红薯\n");
    }
    return 0;
}