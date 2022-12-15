//[C_AR026-中] 選擇排序法動態展示
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int number[1001];
    int count = 0;
    bool haveToSwap;
    haveToSwap = false;
    while (scanf("%d", &number[count]) != EOF) // control D
    {

        count++;
    }
    // print出現在順序
    for (int i = 0; i < count; i++)
    {

        if (i == count - 1)
        {
            printf("%d\n", number[i]);
        }
        else
        {
            printf("%d,", number[i]);
        }
    }
    //選擇排序
    for (int i = 0; i < count - 1; i++)
    {
        haveToSwap = false;
        int min = i, temp = 0;
        for (int j = i + 1; j < count; j++)
        {
            if (number[min] < number[j])
            {
                min = j;
                haveToSwap = true;
            }
        }
        //需要交換
        if (haveToSwap == true)
        { //最少的和現在看的交換位置
            temp = number[min];
            number[min] = number[i];
            number[i] = temp;

            // print出現在順序
            for (int i = 0; i < count; i++)
            {

                if (i == count - 1)
                {
                    printf("%d\n", number[i]);
                }
                else
                {
                    printf("%d,", number[i]);
                }
            }
        }
    }

    return 0;
}

// int atoi(int n){

// }