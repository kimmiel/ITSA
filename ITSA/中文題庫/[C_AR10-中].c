//[C_AR10-中] 新通話費率
#include <stdio.h>
#include <math.h>
struct node
{
    int plan_fee;
    double rate;
    double decount1;
    double decount2;
};
struct node plan[4];

int main()
{
    //把所有數字放入struct
    plan[0].plan_fee = 186; //不要亂填數字浪费了2小時
    plan[0].rate = 0.09;
    plan[0].decount1 = 0.9;
    plan[0].decount2 = 0.8;

    plan[1].plan_fee = 386;
    plan[1].rate = 0.08;
    plan[1].decount1 = 0.8;
    plan[1].decount2 = 0.7;

    plan[2].plan_fee = 586;
    plan[2].rate = 0.07;
    plan[2].decount1 = 0.7;
    plan[2].decount2 = 0.6;

    plan[3].plan_fee = 986;
    plan[3].rate = 0.06;
    plan[3].decount1 = 0.6;
    plan[3].decount2 = 0.5;

    int type, time;
    double fee;
    scanf("%d, %d", &type, &time);
    for (int i = 0; i < 4; i++)
    { //看是那個plan
        if (plan[i].plan_fee == type)
        { //計算通話費
            fee = time * plan[i].rate;
            //四捨5入
            fee = (int)(fee + 0.5);
            //通話費未超過月租費
            if (fee < plan[i].plan_fee)
            {
                fee = plan[i].plan_fee;
            }
            //超過月租費
            else if (fee <= (plan[i].plan_fee * 2))
            {
                fee *= plan[i].decount1;
            } //超過月租費1倍
            else if (fee > (plan[i].plan_fee * 2))
            {
                fee *= plan[i].decount2;
            }
        }
    }
    //四捨5入
    printf("%.0f\n", fee);

    return 0;
}
// 986, 25000