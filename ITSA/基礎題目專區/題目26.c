//題目26. 各位數和排序

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int n, number[1001], a[1001], copy[1001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
        copy[i] = number[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;

        while (copy[count] > 0)
        {
            a[i] += copy[count] % 10;
            copy[count] /= 10;
        }
        count++;
    }
    // //debug
    // printf("看每數字总和:");
    //    for (int i = 0; i < n; i++)
    //     {

    //         printf("number:%d a:%d \n",number[i],a[i]);
    //     }
    // //
    //泡沫排序
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j])
            {
                int temp1 = 0;
                temp1 = a[i];
                a[i] = a[j];
                a[j] = temp1;
                int temp2 = 0;
                temp2 = number[i];
                number[i] = number[j];
                number[j] = temp2;
            }
            if (a[i] == a[j])
            {
                if (number[i] < number[j])
                {
                    int temp2 = 0;
                    temp2 = number[i];
                    number[i] = number[j];
                    number[j] = temp2;
                }
            }
        }
    }

    // print出答案
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d\n", number[i]);
        }
        else
        {
            printf("%d ", number[i]);
        }
    }

    return 0;
}