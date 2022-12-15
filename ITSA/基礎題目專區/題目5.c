//題目5. 十進制轉二進制
#include <stdio.h>
int main()
{
    int number, answer[101], count = 0, complemen;
    scanf("%d", &number);

    //負數所補數  (2的8次方)100000000 - number  也可以寫成
    if (number < 0)
    {
        number += 256; // 256=2的8次方
    }

    //由個位數開始把它,全部/2
    while (number > 0)
    {
        answer[count] = number % 2;
        number /= 2;
        count++;
    }

    //由陣列尾部䦕始列出來 因本來最左面的存在陣列尾部
    if (count <= 8)
    {
        complemen = 8 - count;
        for (int i = 0; i < complemen; i++)
        {
            printf("0");
        }
    }

    for (int i = (count - 1); i >= 0; i--)
    {
        if (i > 0)
        {
            printf("%d", answer[i]);
        }
        else if (i == 0)
        {
            printf("%d\n", answer[i]);
        }
    }

    return 0;
}

// 15