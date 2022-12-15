//題目12. 遞迴程式練習
#include<stdio.h>
int cal(int n);

int main(){
int number,answer;
scanf("%d",&number);
//叫遞迴
answer= cal(number);
printf("%d\n",answer);
    return 0;
}
//遞迴
int cal(int n){
    if(n==0||n==1){
        return n+1;
    }else{
        return cal(n-1)+cal(n/2);
    }
}
//eg 2
//cal(1)+cal(1)
//2+2
//17