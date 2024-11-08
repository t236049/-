#include <stdio.h>

int main()
{
    int num1,num2;
    
    printf("一つ目の数字だして");
    scanf("%d", &num1);
    
    printf("二つ目の数字出して")
    scanf("%d",&num2);
    if(k % 2 == 0 && h % 2 == 0)
    {
        printf("一つ目の数字%dと二つ目の数字%dどちらも偶数。\n",num1,num2);
    }
    else if (k % 2 != 0 && h % 2 != 0)
    {
         printf("一つ目の数字%dと二つ目の数字%dどちらも奇数。\n",num1,num2);
    }
    else 
    {
        printf("一つ目の数字%dと二つ目の数字%d偶数と奇数です。\n",num1,num2);
    }

    return 0;
}
