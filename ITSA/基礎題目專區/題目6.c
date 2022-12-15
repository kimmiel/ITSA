//題目6. 季節判定
#include<stdio.h>
int main(){
    int mouth;
    scanf("%d",&mouth);
    if (mouth>=3&&mouth<=5)
    {
        printf("Spring\n");
    }
    else if (mouth>=6&&mouth<=8)
    {
        printf("Summer\n");
    }    else if (mouth>=9&&mouth<=11)
    {
        printf("Autumn\n");
    }    else if (mouth<=12&&mouth<=2)
    {
        printf("Winter\n");
    }
    
    return 0;
}