//[C_AR53-易] 學生成績排序
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{

    //  當 a>b,return true ,else return false
    if (*(int *)a > *(int *)b)
    {
        return 1;
    }
    else
    {
        return -1;
    }

     //or 用這句取代// return (*(int *)a - *(int *)b);
}
int main()
{
    int number_of_student;
    scanf("%d", &number_of_student);
    int list[number_of_student];
    //讀入所有排序
    for (int i = 0; i < number_of_student; i++)
    {
        scanf("%d", &list[i]);
    }
    //  qsort 排序
    qsort(list, number_of_student, sizeof(int), compare);
    //要排序的陣列的第一個元素的地址,有多少個元素,array中每個元素的大小,比較兩個元素的
    for (int i = 0; i < number_of_student; i++)
    {
        printf("%d\n", list[i]);
    }
    return 0;
}
