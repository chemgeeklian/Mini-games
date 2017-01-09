#include<stdio.h>
//Esc彩蛋中的东西，使用随机数printf几句吐槽，每次Esc都可能出现不同的话。
void print()
{
    int random2();
    printf("Excited!你发现Esc的秘密了。\n中国有句古话叫闷声发大财，但我看你今天这么热情，一句话不说也不好。\n");
    getch();
    switch(random2())//使用外部random2函数确定随机数，确定出现的话。
    {
        case 0:printf("codeblocks不认识中文，codeblocks还不如齐E迪呢\n");break;
        case 1:printf("7ED说，他在写i++的时候总觉的自己写的是我艹。\n");break;
        case 2:printf("游戏中本来应该有彩蛋，然而我已经累觉不爱了。谁能用一句话给我勇气让我去做彩蛋？\n");break;
        case 3:printf("因为游戏使用了随机数，所以即使你每次输入相同的名字结果也可能不同\n");break;
        case 4:printf("这里一共可能出现12句话。\n");break;
        case 6:printf("其实我的main函数还是比较繁琐，因为有些顺着编下去的东西并没有用函数的意识\n");break;
        case 7:printf("因为用的时间做种，所以那个随机数你懂的，我智商低，哎\n");break;
        case 8:printf("名字大战没什么技术含量，我还得向咏神学习一个\n");break;
        case 9:printf("如果发现什么bug或者有什么建议，欢迎发QQ给我。我这脑子学C语言到今天真的不容易，还请大家兹磁\n");break;
        case 10:printf("bug这东西，发现要3秒钟，找到要3小时，debug要一辈子……\n");break;
        case 11:printf("我的程序瑕疵还是比较多的，主要是做完发现有些地方可以改但是懒得改了\n");break;
    }
    getch();
}
