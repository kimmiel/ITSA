//題目21. 最大值與最小值
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <stdio.h>
int main()
{
    float number[10] = {0}, max = 0, min = 100000;
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &number[i]);
        if (i < 9)
        {
            scanf(" ");
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (number[i] < min)
        {
            min = number[i];
        }
        if (number[i] > max)
        {
            max = number[i];
        }
        // printf("%f ", number[i]);
    }

printf("maximum:%0.2f\n",max);
printf("minimum:%0.2f\n",min);
    return 0;
}
