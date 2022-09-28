#include <stdio.h>
int main()
{
    int a, b, add, subtract, multiply, modulo;
    float divide;
    printf("enter two integers\n");
    scanf("%d%d", &a, &b);
    add = a+b;
    subtract=a-b;
    multiply=a*b;
    divide=a/(float)b;
    modulo=a%b;
    printf("sum = %d\n",add);
    printf("difference=%d\n",subtract);
    printf("multiplication=%d\n", multiply);
    printf("division==%.2f\n",divide);
    printf("remainder=%d",modulo);
    return 0;

}
