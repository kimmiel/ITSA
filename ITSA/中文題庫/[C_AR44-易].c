//[C_AR44-易] 迴文問題
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char input[101] = {0};
    char array[101] = {0};
    int length = 0;
    bool is_reflection=true;

    //讀入所有字
    scanf("%s", input);
    length = strlen(input);
    // printf("length:%d\n", length); //

    //把字元按反順序放array
    for (int i = 0; i < length; i++)
    {
        array[length - i - 1] = input[i];
        //    printf("input: %c", input[i]);
    }
    //看原本字串和反順序array是否一樣
    // printf("array: ");
    for (int i = 0; i < length; i++)
    {
        if (array[i] !=input[i])
        {
            is_reflection = false;
            
        }
        // printf("%c", array[i]);
    }
    //不一樣 print NO
    if (is_reflection == false)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}