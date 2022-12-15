//[C_AR36-易] 星座查詢


#include <stdio.h>
int main()
{int mouth,day;
scanf("%d %d",&mouth,&day);

//每個星座 一個一個對
if((mouth==1&&day>=21)||(mouth==2&&day<=18)){
    printf("Aquarius\n");
}else if((mouth==2&&day>=19)||(mouth==3&&day<=20)){
    printf("Pisces\n");
}else if((mouth==3&&day>=21)||(mouth==4&&day<=20)){
    printf("Aries\n");
}else if((mouth==4&&day>=21)||(mouth==5&&day<=21)){
    printf("Taurus\n");
}else if((mouth==5&&day>=22)||(mouth==6&&day<=21)){
    printf("Gemini\n");
}
else if((mouth==6&&day>=22)||(mouth==7&&day<=22)){
    printf("Cancer\n");
}
else if((mouth==7&&day>=23)||(mouth==8&&day<=23)){
    printf("Leo\n");
}else if((mouth==8&&day>=24)||(mouth==9&&day<=23)){
    printf("Virgo\n");
}
else if((mouth==9&&day>=24)||(mouth==10&&day<=23)){
    printf("Libra\n");
}else if((mouth==10&&day>=24)||(mouth==11&&day<=22)){
    printf("Scorpio\n");
}else if((mouth==11&&day>=23)||(mouth==12&&day<=21)){
    printf("Sagittarius\n");
}
else if((mouth==12&&day>=22)||(mouth==1&&day<=20)){
    printf("Capricorn\n");
}

    return 0;
}
