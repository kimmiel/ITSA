//題目8. 質數判別
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int number;
    bool prime_number = true;

    scanf("%d", &number);
    
    // 1 0不是質數
    if (number == 1 || number == 0)
    {
        prime_number = false;
    }

    //當1和他自己以外,除其他數 餘數=0 他不是質數
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime_number = false;
        }
    }

    if (prime_number == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}