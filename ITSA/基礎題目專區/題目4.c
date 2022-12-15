//題目4. 停車費計算
#include <stdio.h>
int main()
{
    int start_hour, start_minute, end_hour, end_minute, total_hour, total_minute;
    int count, fee = 0;
    scanf("%d %d", &start_hour, &start_minute);
    scanf("%d %d", &end_hour, &end_minute);

    //計出總小時
    total_hour = end_hour - start_hour;
    if (total_hour < 0)
    {
        total_hour += 24;
    }
    //計出總分鐘
    total_minute = end_minute - start_minute;
    if (total_minute < 0)
    {
        total_minute += 60;
        total_hour--;
    }
    //當大於4小時
    if (total_hour >= 4)
    {
        total_minute = total_minute + (total_hour - 4) * 60;
        count = total_minute / 30;

        total_minute %= 30;
        fee = fee + count * 60;
        total_hour = 4;
    }
    //當大於2小時
    if (2 < total_hour && total_hour <= 4)
    {
        total_minute = total_minute + (total_hour - 2) * 60;
        count = total_minute / 30;

        total_minute %= 30;
        fee = fee + count * 40;
        total_hour = 2;
    }
    //當少於2小時
    if (total_hour <= 2)
    {
        total_minute = total_minute + total_hour * 60;
        count = total_minute / 30;

        total_minute %= 30;
        fee = fee + count * 30;
    }

    printf("%d\n", fee);

    return 0;
}
