// 3[C_AR03-易] 計算陣列中所有元素的立方和

#include <stdio.h>
int main()
{
    int input[6], anwser = 0;

    //讀入所有數字and  所有數字自乘3次的總和
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &input[i]);
        anwser += input[i] * input[i] * input[i];
    }

    printf("%d", anwser);
    printf("\n"); //最好一定要格行

    return 0;
}
