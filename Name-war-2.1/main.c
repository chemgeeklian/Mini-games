#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
//���ģ����������ָ������жϣ�����71D���Ҳ�֪���ߵ�����ȥ�ˣ�
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
//�����ˡ�������ı����ͺ���������û�õ�ȫ�ֱ����о���Щ��ϧ��

    printf("Name War2.1������ʦ�棨���汾��debug�����Ż����룩\nAcknowledgement��71D 껸� �� ӽ�� saber�����������Ⱥ�\n\n");
    printf("�������ҵı�����������71D�أ������벻Ҫ��������");
    for(a1=1;a1<=7;a1++){printf("\n");}
    for(a2=1;a2<=30;a2++){printf(" ");}
    printf("������Name War������\n                              Please input name1.\n                                    ");

//���涼��Щû���κ����õġ�
    gets(name1);
    while(strlen(name1)>20||strlen(name1)==0)
    {
        if(strlen(name1)>20)printf("          ȡ��Ҫ���ջ��������벻Ҫ����20����ĸ��ʶ����ʶ�ð���\n                              ");
        if(strlen(name1)==0)printf("                       �ҽ�����Ϊһ�����ţ������㲻Ҫֱ���ûس�\n                              ");
        gets(name1);
    }
    printf("                              Please input name2.\n                                    ");
    gets(name2);
    while(strlen(name2)>20||strlen(name2)==0||strcmp(name1,name2)==0)
    {
        if(strlen(name2)>20)printf("          ȡ��Ҫ���ջ��������벻Ҫ����20����ĸ��ʶ����ʶ�ð���\n                              ");
        if(strlen(name2)==0)printf("                       �ҽ�����Ϊһ�����ţ������㲻Ҫֱ���ûس�\n                              ");
        if(strcmp(name1,name2)==0)printf("                             ����Ϊ��Ҫ�����ɱ\n                                    ");
        gets(name2);
    }
/*
�õ��������֡����������ӣ���Ϊ����㲻�ú������һᾯ���㡣�Ա��ֳ����ȶ���
���Ӧ�÷ź�����������ҵĴ�
����֮ǰ�Ķ���ûʲô������������������ҵĽ���Ҳ������������ˡ�
*/

    system("cls");
    printf("Name War����The Battlefield\n��%s�� attack: %d defence: %d life: %d speed: %d\n��%s�� attack: %d defence: %d life: %d speed: %d\n",
           name1,gong(name1),fang(name1),life(name1),su(name1),
           name2,gong(name2),fang(name2),life(name2),su(name2));//��ʼ���������е㳤��
    Sleep(500);
    printf ("Press any key to start the war!\n\n");
    getch();

    int life1=life(name1),life2=life(name2);
    if(su(name1)>su(name2))
    {nf=name1;ns=name2;lf=&life1;gf=gong(name1);ff=fang(name1);ls=&life2;gs=gong(name2);fs=fang(name2);}
    else
    {nf=name2;ns=name1;lf=&life2;gf=gong(name2);ff=fang(name2);ls=&life1;gs=gong(name1);fs=fang(name1);}
/*
�ж�˭�ȹ�������Ӧ��������ģ������û�á���Ȼ��������ָ�룬Ȼ��������߱Ƹ�û��ʲô���á�
��������߳������¡����ǵ���Ϸ���塣
*/
    for(;life1>0&&life2>0;)
    {
        Sleep(1500);
        int d;
        d=imp(gf,fs);
        *ls=*ls-d;
        if(life2<=0||life1<=0)
        {
            printf("����%s�Ѿ�����һϢ�ˣ�%s���ϵز���һ�ţ�������%s��������\n",ns,nf,ns);
            break;
        }
        else
        {
            if(d%8==0&&life1>80&&life2>80)
            {
                *ls=*ls-imp(gf,fs)-20;
                printf("%s�õ��˸��ף����ʹ�ø�֮�Ʊ���%s��ؽ��ǰ��%sֻʣ%d�������ˣ�\n",nf,ns,ns,*ls);
                Sleep(500);
            }
            else{printf("%s����������%s�ܵ�%d���˺���Ȼ����ʣ%d������\n",nf,ns,d,*ls);}//����
        }
        Sleep(1500);
        d=imp(gs,ff);
        *lf=*lf-d;
        if(life2<=0||life1<=0)
        {
            printf("����%s�Ѿ�����һϢ�ˣ�%s�Ͻ�����һ����������%s��������\n",nf,ns,nf);
            break;
        }
        else
        {
            if(d%8==0&&life1>80&&life2>80)
            {
                *lf=*lf-imp(gs,ff)-20;
                printf("%s�õ��˸��ף����ʹ�����޸��ƽ�%s��ؽ��ǰ��%sֻʣ%d�������ˣ�\n",ns,nf,nf,*lf);
                Sleep(500);
            }
            else{printf("%s����������%s�ܵ�%d���˺���Ȼ����ʣ%d������\n",ns,nf,d,*lf);}}
        }
/*
����30�е���Ϸ���塣������ע���в���ϸ������˵���ĵ��н���
�Ƚϼ򵥣��������ж��Ƿ񱩻����Ƿ������һ����
��ʵ������ִ�ս���Դ����Сʱ�������MD5����ս���˼ұ��Ҳ�֪���ߵ�����ȥ�ˡ�
������һ����С��Ϸ���������ͦ�гɾ͸еġ�
*/
    Sleep(1500);
    if(life1>0)
    {printf("%s win!\n",name1);}
    else{printf("%s win!\n",name2);}
//�ж�˭Ӯ��û����ָ�룬�ܼ򵥡�

    switch(getch())
    {
        case 27:system("cls");print();break;
        default:printf("��Ϊʲô�����������Esc�أ�\n");break;//����һ���ʵ��ˡ�
    }
    return(0);
}
/*
���涼�Ǻ�������Ҫ���ÿ�����ֵĲ���ֵ��ͨ�������ַ������Ⱥ�ASCII�룬���г˻���ֵ��������Ȼ�����ֵġ��������ֵ��
�����ǵ��㷨����Ϊ�����̵ͣ��벻��ʲô���С�
������֪��ʲô������������ȡʤ�ˡ�
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
