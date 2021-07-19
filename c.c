#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "string.h"

int main()
{
    float v, i;

    printf("请输入球的半径：\n");
    scanf("%f",&i);

    v = 4.0f / 3.0f * 3.14f * i * i * i;
    printf("球的体积为：%f\n", v);
  
    return 0;
}