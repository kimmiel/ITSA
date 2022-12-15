//[C_AR20-易] 檢查數值是否有重複

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
int main()
{
    int count[128] = {0}, numbers[128], num;
    bool repeat = false;
    scanf("%d", &num);

    //在讀入所有數字計算它們的出現次數
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &numbers[i]);

        //把每個數字出現次數記到陣列的對應位置
        for (int j = 0; j < 128; j++)
        {
            if (numbers[i] == (j + 1))
            {
                count[j]++;
                //出現次數多於一時, repeat = true 代表該數列有重復數字
                if (count[j] > 1)
                {
                    repeat = true;
                }
            }
        }
    }
    //有重復數字 cout << 0,否則cout << 1
    if (repeat == true)
    {
        printf("%d\n", 0);
    }
    else
    {
        printf("%d\n", 1);
    }

    return 0;
}
// 1 4 6 2 3 5 8 7