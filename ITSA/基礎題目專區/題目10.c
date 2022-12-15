//題目10. 輾轉相除法
//求其最大公因數
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main()
{
    int num1, num2, factor1[1001], factor2[1001], conut1 = 0, conut2 = 0, ans_list[1001], conut3 = 0, anwser = 1; // factor=因數
    scanf("%d %d", &num1, &num2);
    //找num1的因數
    for (int i = 2; i < num1; i++)
    {
        if (num1 % i == 0)
        {
            factor1[conut1] = i;
            conut1++;
        }
    }
    //找num2的因數
    for (int i = 2; i < num2; i++)
    {
        if (num2 % i == 0)
        {
            factor2[conut2] = i;
            conut2++;
        }
    }
    //找共同因數
    for (int i = 0; i < conut1; i++)
    {
        for (int j = 0; j < conut2; j++)
        {
            if (factor1[i] == factor2[j])
            {
                ans_list[conut3] = factor1[i];
                conut3++;
            }
        }
    }
    // 找最大因數
    for (int i = 0; i < conut3; i++)
    {
        if (anwser < ans_list[i])
        {
            anwser=ans_list[i];
        }
    }
printf("%d\n",anwser);
    return 0;
}
