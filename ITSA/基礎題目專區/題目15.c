//題目15. 文字及字母出現次數
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <stdio.h>
//用struct記錄每個英文字大小階和出現次數
struct node
{
    char small;
    char big;
    int count;
};

int main()
{
    char array[1001], number_of_word = 0;
    int length = 0;
    //把每英文字大小寫寫到struct
    struct node letter[26] = {{.small = 'a', .big = 'A'}, {.small = 'b', .big = 'B'}, {.small = 'c', .big = 'C'}, {.small = 'd', .big = 'D'}, {.small = 'e', .big = 'E'}, {.small = 'f', .big = 'F'}, {.small = 'g', .big = 'G'}, {.small = 'h', .big = 'H'}, {.small = 'i', .big = 'I'}, {.small = 'j', .big = 'J'}, {.small = 'k', .big = 'K'}, {.small = 'l', .big = 'L'}, {.small = 'm', .big = 'M'}, {.small = 'n', .big = 'N'}, {.small = 'o', .big = 'O'}, {.small = 'p', .big = 'P'}, {.small = 'q', .big = 'Q'}, {.small = 'r', .big = 'R'}, {.small = 's', .big = 'S'}, {.small = 't', .big = 'T'}, {.small = 'u', .big = 'U'}, {.small = 'v', .big = 'V'}, {.small = 'w', .big = 'W'}, {.small = 'x', .big = 'X'}, {.small = 'y', .big = 'Y'}, {.small = 'z', .big = 'Z'}};
    //用fgets拿整句句子
    fgets(array, 1001, stdin);
    length = strlen(array);
    //空白格數目+1=單空數目
    for (int i = 0; i < length; i++)
    {
        if (array[i] == ' ')
        {
            number_of_word++;
        }
    }
    //算每個英文字出現次數
    printf("%d\n", (number_of_word + 1));
    for (int i = 0; i < 26; i++)
    {
        letter[i].count = 0;
        for (int j = 0; j < length; j++)
        {
            if (array[j] == letter[i].small || array[j] == letter[i].big)
            {
                letter[i].count++;
            }
        }
    }
    //printf 出每個英文字的出現次數
    for (int i = 0; i < 26; i++)
    {
        if (letter[i].count > 0)
        {
            printf("%c : %d\n", letter[i].small, letter[i].count);
        }
    }
    return 0;
}
