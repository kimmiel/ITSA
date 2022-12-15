//題目9. 計算正整數被3整除之數值之總和
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <stdio.h>
int main()
{
    int input, array[10001], counter = 0, answer = 0;
    scanf("%d", &input);
    // 存下所有可以被3除的數字
    for (int i = 1; i <= input; i++) // X i=0 因為是1到input 所以int i = 1; i <= input
    {
        if (i % 3 == 0)
        {
            array[counter] = i;
            counter++;
        }
    }
//把所有"可以被3除的數字"加起來
    for (int i = 0; i < counter; i++)
    {
        answer = answer + array[i];
    }
    printf("%d\n", answer);
    return 0;
}
