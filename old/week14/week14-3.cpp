#include <stdio.h>
int a=20;
void funcA()
{
    int a=10;
    printf("funcA�̦L��a%d\n",a);
}
void funcB()
{
    int a=30;
    printf("funcB�̦L��a%d\n",a);
}
int main()
{
    printf("�bmain()�ݨ쪺a�O:%d\n",a);
    funcA();
    funcB();
    printf("�bmain()�ݨ쪺a�O:%d\n",a);

}
