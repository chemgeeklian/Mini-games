#include <time.h> //judge�ļ���ʵ������������õġ����õ���time������������԰ٶȣ��ܳ�����α��������ɷ�ʽ��
#include<stdio.h>
int random()
{
    int num;
    srand( (unsigned)time( NULL ) );//�ü�ʱ��ϵͳʱ���������������.���������
    num=rand()%25;
    return(num);
}

int random2()//��random����ԭ����ͬ�����ǻ��˸�%��������������Esc�ʵ���
{
    int num;
    srand( (unsigned)time( NULL ) );
    num=rand()%12;
    return(num);
}
