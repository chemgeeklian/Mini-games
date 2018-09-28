#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int m=100,i=1;
    char a;
    void print(int i);
    while(1)
    {
        printf("开始殴打徐霸！您的金钱:%d\n",m);
        print(i);
        if(i>=2&&i<=5){system("CLS");i++;continue;}
        if(i>=7&&i<=8){system("CLS");i++;continue;}
        if(i>=10&&i<=11){system("CLS");i++;continue;}
        printf("请选择殴打徐霸的工具\na.二狗 b.实验报告 c.基础有基化学 d.大鸡排 e.拳头\n");
        scanf("%c",&a);
        printf("\n");
        switch(a)
        {
        case 'a':i=2;;m=m-49;break;
        case 'b':{printf("你的实验报告损坏了！你不得不重新买一本。殴打失败，金钱-2\n");m=m-2;Sleep(1500);break;}
        case 'c':i=7;break;
        case 'd':i=10;m=m+7;break;
        case 'e':
        {
            printf("啊！！！由于徐霸智商过高，头过于坚硬，你的手受伤了！\n");
            Sleep(1000);
            printf("你去吉大一院治疗，花费30元\n");
            Sleep(1000);
            m=m-30;
            break;
            }
        }
        if(m<=0){printf("你没钱了别打了……\n");break;}
        system("CLS");
    }
    getchar();
    getchar();
}
void print(int i)
{
    if(i==1)printf(" |~~~~~|                |||||||\n<| = 0 |>               |。 。|\n [__V__|                [__o__]\n  |======3               |   |\n  |   ======3            || ||\n  [____]                 口_口\n  // //                  || ||\n // //                   || ||\n口  口                   口 口\n");
    if(i==2)
    {
        printf(" |~~~~~|                |||||||\n<| = 0 |>               |。 。|\n [__V__|                [__o__]\n ======3                 |   |\n|   ======3              || ||\n|_______]                口_口\n/  / /  /                || ||\n| /  | /                 || ||\n口   口                  口 口\n");
        printf("天空一声巨响，二狗闪亮登场\n");
        Sleep(500);
    }
    if(i==3)
    {
        printf(" |~~~~~|          |||||||\n<| = 0 |>         |。 。|\n [__V__|          [__o__]\n ======3          |   |\n|   ======3       || ||\n|_______]         口_口\n/  / /  /         || ||\n| /  | /          || ||\n口   口           口 口\n吸星大法\n");
        Sleep(500);
    }
    if(i==4)
    {
        printf(" |~~~~~|    |||||||\n<| = 0 |>   |。 。|\n [__V__|    [__o__]\n ======3   |   |\n|   ======3|| ||\n|_______]  口_口\n/  / /  /   || ||\n| /  | /    || ||\n口   口      口 口\n");
        Sleep(500);
    }
    if(i==5)
    {
        printf("\nBOMB!!!\n");
        Sleep(1000);
        printf("殴打成功！！\n作为奖励，你得到了一块钱。\n\n");
        Sleep(1100);
        printf("Oops!你的50块钱被二狗抢走了！");
        Sleep(1000);
    }
    if(i==7)
    {
        printf(" |~~~~~|                |||||||\n<| = 0 |>               |。 。|\n [__V__|  ______        [__o__]\n  |======[     |         |   |\n  |   ======3  |         || ||\n  [____] [_____]         口_口\n  // //                  || ||\n // //                   || ||\n口  口                   口 口\n\n嘿嘿\n");
        Sleep(1000);
    }
    if(i==8)
    {
        printf(" |   |\n[_____]\n /__ |_______    啊！饶命啊\n L| V        |\n  |          ||||\n  [__________]  |\n     <|  X   X  |>\n");
        Sleep(2000);
        printf("殴打成功！\n");
        Sleep(1500);
    }
    if(i==10)
    {
        printf("你购买了大鸡排，花费￥13.\n\n");
        Sleep(2000);
    }
    if(i==11)
    {
        printf(" |||||||||\n |       |\n<|(.) (.)|>\n |  ___  |\n [_|__ |_]\n  |  V||  =====3\n /|    。|\n\n哇！！大鸡排！！！！ \n ");
        Sleep(601);
        printf("\n\n徐霸用嘴接住了大鸡排，然后逃走了！\n");
        Sleep(1000);
        printf("殴打失败，为了安慰你，你获得了20元\n");
        Sleep(2000);
    }
}
