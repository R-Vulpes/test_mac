#include <stdio.h>
#include <stdlib.h>

// while语句
// 打印1-10的数字
// break跳出整个循环;continue跳过本次循环continue后面的代码，直接向后判断循环条件
// int main()
// {
//     int i = 0;
//     while (i < 10)
//     {
//         i++;
//         if (i == 5)
//             // break;
//             continue;
//         printf("%d ", i);
//     }

//     system("pause");
//     return 0;
// }

int main()
{
    // int c = getchar();
    // // EOF;//end of file
    // printf("%c\n",c);
    // putchar(c);

    // int ch = 0;
    // while((ch = getchar()) != EOF)
    // {
    //     putchar(ch);
    // }

    char ch = '\0';
    while ((ch = getchar()) != EOF)
    {
        if (ch < '0' || ch > '9')
            continue;

        putchar(ch);
    }
    return 0;
}