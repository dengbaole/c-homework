#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



/*
    ���ƣ�switch����Ӧ��
    ���ܣ�do witch��switch��ʾ�˵�
    ���ߣ��˱���
    ���ڣ�20210720
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
        printf("���������ѡ��");
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
            printf("�������");
            break;
        }

    } while (input)
            ;

    return 0;
}














/*
    ���ƣ�if����Ӧ��
    ���ܣ�if����һ��Ӧ��
    ���ߣ��˱���
    ���ڣ�20210719

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
    ���ƣ�addfrac.c
    ���ܣ��������
    ���ߣ��˱���
    ���ڣ�20210719

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
    ���ƣ���printf������ʽ����
    ���ߣ��˱���
    ���ڣ�20210719

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