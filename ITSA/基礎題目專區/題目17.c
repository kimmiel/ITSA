//題目17. 英文斷詞
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h> //轉大小寫

int main()
{
    int count = 0;
    int len = 0;
    char sentence[10001], array[1001][1001];
    char *token = " \r\n", *pointer; //" \r\n" 不只是" "
    bool repeat = {false};

    //讀入整句所有單詞 放入array
    fgets(sentence, 10001, stdin);
    len = strlen(sentence);
    //把每個變成小階
    for (int i = 0; i < len; i++)
    {
        sentence[i] = tolower(sentence[i]);
    }

    pointer = strtok(sentence, token); // strtok 1
    while (pointer != NULL)            // strtok 2
    {
        //看單詞有沒有重複 
        repeat = false;
        for (int i = 0; i < count; i++)
        {
            // printf("strcmp: %d %s", strcmp(array[i], pointer),array[i]);
            if (strcmp(array[i], pointer) == 0)
            {
                repeat = true;
                break;
            }
        }
        //沒有重複才放入 array
        if (repeat == false)
        {
            strcpy(array[count], pointer);
            count++;
        }
        pointer = strtok(NULL, token); // strtok 3
    }
    // printf出
    for (int i = 0; i < count; i++)
    {
        if (i != 0)
        {
            printf(" ");
        }
        printf("%s", array[i]);
    }
    printf("\n");
    return 0;
}
// How do you do sdf sadf you sd