//演算法類型 基礎題目專區 題目1. 矩陣數字顯示
#include <stdio.h>
void print_the_number(int row, char a[][5]);
int main()
{

    char number_users_enter[5];
    // 每個數字的圖形
    char zero[5][5] = {{'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}};
    char one[5][5] = {{' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}};
    char two[5][5] = {{'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', ' '}, {'*', '*', '*', '*', '*'}};
    char three[5][5] = {{'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}};
    char four[5][5] = {{'*', ' ', ' ', ' ', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}};
    char five[5][5] = {{'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', ' '}, {'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}};
    char six[5][5] = {{'*', ' ', ' ', ' ', ' '}, {'*', ' ', ' ', ' ', ' '}, {'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}};
    char seven[5][5] = {{'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}};
    char eight[5][5] = {{'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}};
    char nine[5][5] = {{'*', '*', '*', '*', '*'}, {'*', ' ', ' ', ' ', '*'}, {'*', '*', '*', '*', '*'}, {' ', ' ', ' ', ' ', '*'}, {' ', ' ', ' ', ' ', '*'}};

    scanf("%s", number_users_enter);
    //印出每個數字的每一行
    for (int j = 0; j < 5; j++) //先每一行橫向印出來 有5行所以for loop 5次
    {
        //有4個數字所以4次 印每個數字的第j行出來
        for (int i = 0; i < 4; i++)
        {
            if (number_users_enter[i] == '0')
            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, zero);
            }
            else if (number_users_enter[i] == '1')

            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, one);
            }
            else if (number_users_enter[i] == '2')
            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, two);
            }
            else if (number_users_enter[i] == '3')
            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, three);
            }
            else if (number_users_enter[i] == '4')
            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, four);
            }
            else if (number_users_enter[i] == '5')
            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, five);
            }
            else if (number_users_enter[i] == '6')
            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, six);
            }
            else if (number_users_enter[i] == '7')
            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, seven);
            }
            else if (number_users_enter[i] == '8')
            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, eight);
            }
            else if (number_users_enter[i] == '9')
            {
                if (i > 0)
                {
                    printf(" ");
                }
                print_the_number(j, nine);
            }
            //印出空格
        }

        printf("\n"); //最后也要\n
    }

    return 0;
}

//印出期中一個數字 的某一行
void print_the_number(int row, char a[][5])
{

    for (int j = 0; j < 5; j++)
    {
        printf("%c", a[row][j]);
    }
}