#include<stdio.h>

/*
用随机数设置伤害点数
其实我对这个算法很不满意，也因此war中伤害点数与攻防关系并不十分合理……
欢迎交流改进。
*/
int imp(int c,int d)
{
    extern int random();
    int ou;
    if(d<c){ou=((c-d)/3)+random();}
    else{ou=((15*c)/d)+random();}
    return(ou);
}
