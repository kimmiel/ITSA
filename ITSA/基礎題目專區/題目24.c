//題目24. 計算複利
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
int main()
{double r,ans=0;//不能用float不準確
int n,p;
scanf("%lf",&r);
scanf("%d",&n);
scanf("%d",&p);

for (int i = 0; i < n; i++)
{
ans=ans+p;//每月多存p元
ans=ans+(ans*r);//計複利
}
ans=floor(ans);
printf("%.0lf\n",ans);//floor()拿最少整數
    return 0;
}
    // r: 每期利率。以前例而言， r = 0.1%
    // n: 期數。以前例而言， n = 3
    // p: 每期投入金額。以前例而言 p = 10000