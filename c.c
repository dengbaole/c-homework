#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "string.h"

int main()
{
    float v, i;

    printf("��������İ뾶��\n");
    scanf("%f",&i);

    v = 4.0f / 3.0f * 3.14f * i * i * i;
    printf("������Ϊ��%f\n", v);
  
    return 0;
}