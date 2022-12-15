//演算法類型 中文題庫 陣列 I 1(Array) 一維陣列反轉 I C_AR01-易
#include <stdio.h>
int main()
{
    int input[101];
    int count = 0, n;

    //讀入不知長度的數字
    while (scanf("%d", & input[count]) != EOF)//EOF代表檔案結束
    {
      count++;
    }

    for (int i = (count - 1); i >= 0; i--)
    {
        printf("%d", input[i]);
        if (i > 0)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
// 4 6 3 69 234 56 89 23 3 1 176 5 890 643 2 0 500 6 634 55 123 87 77 32 22 111 4