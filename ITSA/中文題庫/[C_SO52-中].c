// [C_SO52-中]泡沫排序法(排序soring2)
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
    //泡沫排序
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-1- i; j++)
        {
            if (a[j] < a[j+1])
            {
                int temp = 0;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // print出所有答案
    for (int i = 0; i < n; i++)
    {
       
            printf("%d %d\n", i + 1, a[i]);
        
    }

    return 0;
}
