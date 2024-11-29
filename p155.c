#include <stdio.h>
#include <math.h>

int main(void)
{
    int i = 1;
    printf("     逆数        2乗  平方根\n");
    printf("----------------------------\n");
    
    while (i <= 10)
    {
        double value = i;
        double a = 1 / value;
        double b = value * value;
        double c = sqrt(value);
        printf("%5.1f  %5.3f  %6.1f  %6.4f\n",value, a, b, c);
        i= i + 1;
    }
    return 0;
}
