#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


/*
    名称：addfrac.c
    功能：分数相加
    作者：邓宝乐
    日期：20210719

*/


int main()
{
    int num1, num2, denom1, denom2, result_num, result_denom;

    printf("Enter the first fraction:");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter the second fraction:");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom1 + num2 * denom2;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}





/*
    名称：用printf函数格式化数
    作者：邓宝乐
    日期：20210719

*/



//
//int main()
//{
//    int i;
//    float x;
//
//    i = 40;
//    x = 839.21f;
//
//    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
//    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
//  
//    return 0;
//}