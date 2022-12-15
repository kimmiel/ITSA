//題目23. 找零錢問題
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <stdio.h>
int main()
{
    int total_money, number_of_apple, number_of_peach, number_of_orange, the_rest_of_money = 0;
    int fify_con = 0, five_con = 0, one_con;
    scanf("%d,%d,%d,%d", &total_money, &number_of_apple, &number_of_orange, &number_of_peach);
    //會找回多少錢
    the_rest_of_money = total_money - 15 * number_of_apple - 20 * number_of_orange - 30 * number_of_peach;
    //當帶的錢不夠買水果 printf 0
    if (the_rest_of_money <= 0)
    {
        printf("%d\n", 0);
    }
    else
    {
        // printf("the rest of money:%d", the_rest_of_money); //
        fify_con = the_rest_of_money / 50;
        the_rest_of_money %= 50;
        // printf("the rest of money/50:%d", the_rest_of_money); //
        five_con = the_rest_of_money / 5;
        one_con = the_rest_of_money % 5;
        // printf("the rest of money/5:%d", one_con); //
        printf("%d,%d,%d\n", one_con, five_con, fify_con);
    }

    return 0;
}

// 145