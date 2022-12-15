//[[C_SO06-中] 考試成績排名(sort 1)

struct Node
{
    int id;
    int math;
    int english;

} core[1000];

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    //讀入所有數字print出結果
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &core[i].id, &core[i].math, &core[i].english);

    }

    //泡沫排序
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        struct Node temp;
       
        
        for (int j = i + 1; j < n; j++)
        {
            if (core[min].math < core[j].math)
            {
                min = j;
            }
        }
        //最少的和現在看的交換位置
        temp = core[min];
        core[min] = core[i];
        core[i] = temp;
    }

    // print出所有答案
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", core[i].id, core[i].math, core[i].english);
    }

    return 0;
}