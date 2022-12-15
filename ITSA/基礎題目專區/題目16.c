//題目16. 子字串出現次數
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char sentence1[128], sentence2[512], *index;
    int count = 0;
    scanf("%s", sentence1);
    scanf("%s", sentence2);
    // strstr 回傳子字串第一次出現的位置
    index = strstr(sentence2, sentence1);//strstr(長,短)
    //如果有第一個子字串,看下去有没有其他子字串
    while (index != NULL)
    {
        count++;
        index += 1; //前進一個字元
                    // index+=strlen(sentence1);
        index = strstr(index, sentence1);
    }
    printf("%d\n", count);

    return 0;
}
