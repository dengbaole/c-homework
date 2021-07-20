#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



/*
    名称：switch语句的应用
    功能：do witch和switch显示菜单
    作者：邓宝乐
    日期：20210720
*/


void menu()
{
    printf("*****************************************\n");
    printf("****** 1. add           2. del    *******\n");
    printf("****** 3. search        4. modify *******\n");
    printf("****** 5. show          6. sort   *******\n");
    printf("****** 0. exit                    *******\n");
    printf("*****************************************\n");
}



int main()
{
    int input;
    do
    {
        menu();
        printf("请输入你的选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("add");
            break;
        case 2:
            printf("del");
            break;
        case 3:
            printf("search");
            break;
        case 4:
            printf("modify");
            break;
        case 5:
            printf("show");
            break;
        case 6:
            printf("sort");
            break;
        default:
            printf("输入错误");
            break;
        }

    } while (input)
            ;

    return 0;
}














/*
    名称：if语句的应用
    功能：if语句的一般应用
    作者：邓宝乐
    日期：20210719

*/

//int main()
//{
//    int i = 1;
//    if (i == 1)
//    {
//        printf("%d\n", i);
//    }
//    else
//    {
//        printf("%d\n", i);
//    }
//
//    return 0;
//}











/*
    名称：addfrac.c
    功能：分数相加
    作者：邓宝乐
    日期：20210719

*/


//int main()
//{
//    int num1, num2, denom1, denom2, result_num, result_denom;
//
//    printf("Enter the first fraction:");
//    scanf("%d/%d", &num1, &denom1);
//
//    printf("Enter the second fraction:");
//    scanf("%d/%d", &num2, &denom2);
//
//    result_num = num1 * denom1 + num2 * denom2;
//    result_denom = denom1 * denom2;
//
//    printf("The sum is %d/%d\n", result_num, result_denom);
//
//    return 0;
//}





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