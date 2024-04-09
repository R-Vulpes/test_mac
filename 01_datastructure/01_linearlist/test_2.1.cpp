#include<stdio.h>
#include<stdlib.h>

void test(int &x) // (int &x)可以将修改值带回
{
    x = 1024;
    printf("函数内 x=%d\n",x);
}

int main() 
{
    int x = 1;
    printf("调用前 x=%d\n",x);
    test(x); 
    printf("调用后 x=%d\n",x);

    // system("pause");
    return 0;
}