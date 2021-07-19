#define _CRT_SECURE_NO_WARNINGS 1


/*
    名称：用printf函数格式化数
    作者：邓宝乐
    日期：20210719

*/

#include <stdio.h>


int main()
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
  
    return 0;
}