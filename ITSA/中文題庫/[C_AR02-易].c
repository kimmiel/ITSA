//演算法類型 中文題庫 陣列 I (Array) 2一維陣列反轉 II C_AR02-易
#include <stdio.h>
int main()
{
    int input[6], output[6];
    int count = 0;

    //讀入所有數字
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &input[i]);
    }

    //把舊陣列的數字,放到新陣列的開頭
    count = 5;
    for (int i = 0; i < 6; i++)
    {

        output[i] = input[count];
        count--;
    }

    //印出新陣列
    for (int i = 0; i < 6; i++)
    {

        printf("%d", output[i]);
        if (i != 5)
        {
            printf(" ");
        }
    }
    printf("\n");//最好一定要格行
    return 0;
}
