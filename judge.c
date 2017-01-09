#include <time.h> //judge文件其实是生成随机数用的……用到了time函数，具体可以百度，很常见的伪随机数生成方式。
#include<stdio.h>
int random()
{
    int num;
    srand( (unsigned)time( NULL ) );//用即时的系统时间来做随机数种子.生成随机数
    num=rand()%25;
    return(num);
}

int random2()//和random函数原理相同，就是换了个%。。本函数用于Esc彩蛋。
{
    int num;
    srand( (unsigned)time( NULL ) );
    num=rand()%12;
    return(num);
}
