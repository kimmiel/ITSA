//[C_MM03-易] 兩數總和
#include <stdio.h>
int main()
{
    int num1[1000], num2[1000];
    int count = 0;
    //讀入多組數字
    while (scanf("%d %d", &num1[count], &num2[count])!=EOF)
    {

        count++;
    }
//輸出答案
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", (num1[i] + num2[i]));
    }

    return 0;
}
