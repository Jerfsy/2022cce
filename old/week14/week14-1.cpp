#include <stdio.h>
int sum(int a, int b);///���ŧideclare

int main()
{///�A�Τ��e,�n���ŧideclare �Ωw�qdefine

    int ans = sum(2,3);///�ϥ� �I�s
    printf("ans: %d\n",ans);
}
int sum(int a, int b)///�w�q define
{
    return a + b;
}///�^�� �^�ФH�a
