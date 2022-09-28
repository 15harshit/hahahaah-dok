#include <stdio.h>
int main()
{
    int x, y, add, subtract, multiply, modulo;
    float divide;
    printf("enter two integers\n");
    scanf("%d%d", &x, &y);
    add = x+y;
    subtract=x-y;
    multiply=x*y;
    divide=x/(float)y;
    modulo=x%y;
    printf("sum = %d\n",add);
    printf("difference=%d\n",subtract);
    printf("multiplication=%d\n", multiply);
    printf("division==%.2f\n",divide);
    printf("remainder=%d",modulo);
    return 0;

}
