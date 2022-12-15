//[C_SO10-易] 選擇排序法(sort 1)
#include <stdio.h>
int main()
{
    int n, a[1000];
    scanf("%d", &n);
    //讀入所有數字print出結果
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //選擇排序
    for (int i = 0; i < n - 1; i++)
    {
       int min = i,temp=0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        //最少的和現在看的交換位置
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    // print出所有答案
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d\n", a[i]);//
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}