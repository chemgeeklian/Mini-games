#include<stdio.h>

/*
������������˺�����
��ʵ�Ҷ�����㷨�ܲ����⣬Ҳ���war���˺������빥����ϵ����ʮ�ֺ�����
��ӭ�����Ľ���
*/
int imp(int c,int d)
{
    extern int random();
    int ou;
    if(d<c){ou=((c-d)/3)+random();}
    else{ou=((15*c)/d)+random();}
    return(ou);
}
