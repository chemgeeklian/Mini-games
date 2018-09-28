#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
//核心：随机数，用指针进行判断（不过71D比我不知道高到哪里去了）
int main()
{
    system("color 2E");
    int life(char b[]);
    int gong(char b[]);
    int fang(char b[]);
    int su(char a[]);
    extern void print();
    extern int random();
    extern int imp(int c,int d);

    int a1,a2;
    char name1[20];char name2[20];
    char *nf,*ns;
    int *lf,*ls,gf,gs,ff,fs;
//定义了。额，还算多的变量和函数，但是没用到全局变量感觉有些可惜。

    printf("Name War2.1交给老师版（本版本略debug，略优化代码）\nAcknowledgement：71D 昊哥 蛤 咏神 saber（排名不分先后）\n\n");
    printf("※由于我的编译器还不如71D呢，所以请不要输入中文");
    for(a1=1;a1<=7;a1++){printf("\n");}
    for(a2=1;a2<=30;a2++){printf(" ");}
    printf("【【【Name War】】】\n                              Please input name1.\n                                    ");

//上面都是些没有任何卵用的。
    gets(name1);
    while(strlen(name1)>20||strlen(name1)==0)
    {
        if(strlen(name1)>20)printf("          取名要按照基本法，请不要超过20个字母，识得唔识得啊？\n                              ");
        if(strlen(name1)==0)printf("                       我今天作为一个长着，告诉你不要直接敲回车\n                              ");
        gets(name1);
    }
    printf("                              Please input name2.\n                                    ");
    gets(name2);
    while(strlen(name2)>20||strlen(name2)==0||strcmp(name1,name2)==0)
    {
        if(strlen(name2)>20)printf("          取名要按照基本法，请不要超过20个字母，识得唔识得啊？\n                              ");
        if(strlen(name2)==0)printf("                       我今天作为一个长着，告诉你不要直接敲回车\n                              ");
        if(strcmp(name1,name2)==0)printf("                             人类为何要自相残杀\n                                    ");
        gets(name2);
    }
/*
得到两个名字。看起来复杂，因为如果你不好好输入我会警告你。以保持程序稳定。
这段应该放函数里，我懒，我的错。
清屏之前的东西没什么技术含量，但是与玩家的交互也就在这个部分了。
*/

    system("cls");
    printf("Name War——The Battlefield\n【%s】 attack: %d defence: %d life: %d speed: %d\n【%s】 attack: %d defence: %d life: %d speed: %d\n",
           name1,gong(name1),fang(name1),life(name1),su(name1),
           name2,gong(name2),fang(name2),life(name2),su(name2));//初始化参数，有点长。
    Sleep(500);
    printf ("Press any key to start the war!\n\n");
    getch();

    int life1=life(name1),life2=life(name2);
    if(su(name1)>su(name2))
    {nf=name1;ns=name2;lf=&life1;gf=gong(name1);ff=fang(name1);ls=&life2;gs=gong(name2);fs=fang(name2);}
    else
    {nf=name2;ns=name1;lf=&life2;gf=gong(name2);ff=fang(name2);ls=&life1;gs=gong(name1);fs=fang(name1);}
/*
判断谁先攻击，爹应该用数组的，结果爹没用……然而爹用了指针，然而对于提高逼格并没有什么卵用。
下面才是冗长、啰嗦、弱智的游戏正体。
*/
    for(;life1>0&&life2>0;)
    {
        Sleep(1500);
        int d;
        d=imp(gf,fs);
        *ls=*ls-d;
        if(life2<=0||life1<=0)
        {
            printf("看到%s已经奄奄一息了，%s果断地踩了一脚，结束了%s的性命。\n",ns,nf,ns);
            break;
        }
        else
        {
            if(d%8==0&&life1>80&&life2>80)
            {
                *ls=*ls-imp(gf,fs)-20;
                printf("%s得到了蛤的祝福，使用蛤之财宝将%s打回解放前，%s只剩%d点绳命了！\n",nf,ns,ns,*ls);
                Sleep(500);
            }
            else{printf("%s发动攻击，%s受到%d点伤害，然而还剩%d点生命\n",nf,ns,d,*ls);}//暴击
        }
        Sleep(1500);
        d=imp(gs,ff);
        *lf=*lf-d;
        if(life2<=0||life1<=0)
        {
            printf("看到%s已经奄奄一息了，%s赶紧补了一刀，结束了%s的性命。\n",nf,ns,nf);
            break;
        }
        else
        {
            if(d%8==0&&life1>80&&life2>80)
            {
                *lf=*lf-imp(gs,ff)-20;
                printf("%s得到了蛤的祝福，使用无限蛤制将%s打回解放前，%s只剩%d点绳命了！\n",ns,nf,nf,*lf);
                Sleep(500);
            }
            else{printf("%s发动攻击，%s受到%d点伤害，然而还剩%d点生命\n",ns,nf,d,*lf);}}
        }
/*
仅有30行的游戏正体。具体在注释中不便细讲，在说明文档中讲。
比较简单，仅包括判断是否暴击及是否是最后一击。
其实这个名字大战灵感源自于小时候玩过的MD5大作战，人家比我不知道高到哪里去了。
不过能一点点把小游戏编出来还是挺有成就感的。
*/
    Sleep(1500);
    if(life1>0)
    {printf("%s win!\n",name1);}
    else{printf("%s win!\n",name2);}
//判断谁赢，没有用指针，很简单。

    switch(getch())
    {
        case 27:system("cls");print();break;
        default:printf("你为什么不试试神奇的Esc呢？\n");break;//算是一个彩蛋了。
    }
    return(0);
}
/*
下面都是函数，主要输出每个名字的参数值，通过计算字符串长度和ASCII码，进行乘积比值加入变量等获得名字的……额，能力值。
很弱智的算法，因为我智商低，想不出什么好招。
看看就知道什么样的名字容易取胜了。
*/
int lenth(char a[])
{
    int le=0,i,bb;
    bb=strlen(a);
    for(i=0;i<bb;i++)
    {le=le+a[i];}
    return(le);
}

int life(char b[])
{
    int lenth(char a[]);int ou;
    ou=2*lenth(b)/strlen(b)+b[1];
    return(ou);
}

int gong(char b[])
{
    int lenth(char a[]);int ou;
    ou=lenth(b)/strlen(b);
    return(ou);
}

int fang(char b[])
{
    int lenth(char b[]);int ou;
    ou=(lenth(b)/strlen(b))*(lenth(b)/strlen(b))/(20*strlen(b));
    return(ou);
}

int su(char a[])
{
    int lenth(char a[]);int ou;
    ou=(233+lenth(a))/(strlen(a));
    return(ou);
}
