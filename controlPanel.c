#include <stdio.h>
#include "controlPanel.h"

void mainControl()
{
    int isEnterMenu = -1;
    int menuDecision = -1;
    spaceWelcome();
    menuDecision = spaceMenu();
    operateMenu(menuDecision);
}

// 欢迎界面s
int spaceWelcome()
{
    char decision[1] = "";
    int isEnterMenu = 0;
    printf("-----------------------------\n");
    printf("    欢迎使用诊疗管理系统    \n");
    printf("作者：201818xx-xxx\n");
    printf("-----------------------------\n");
    printf("摁任意键进入功能菜单，输入 q 退出系统\n");

    scanf("%c", &decision[0]);

    switch (decision[0])
    {
    case 'q':
        /* code */
        printf("再见！\n");
        exit(0);
        break;
    default:
        isEnterMenu = 1;
        printf("跳转到菜单\n");
        break;
    }
    return isEnterMenu;
}

// 菜单
int spaceMenu()
{
    int decision = -1;
    printf("-----------------------------\n");
    printf("           功能菜单 \n");
    printf("作者：201818xx-xxx\n");
    printf("-----------------------------\n");
    printf("请输入你想使用的功能序号\n");
    printf("1. 从文件导入诊疗记录\n");
    printf("2. 录入一条这诊疗记录\n");
    printf("3. 修改一条诊疗记录\n");
    printf("4. 删除一条诊疗记录\n");
    printf("5. 打印一位医生的诊疗信息\n");
    printf("6. 打印患者的历史诊疗信息\n");
    printf("7. 统计医院目前营业额\n");
    printf("8. 生成当前住院 报表\n");
    printf("9. 统计医生出诊情况及繁忙程度\n");
    printf("10. 输出某时间段的诊疗信息\n");
    printf("11. 保存系统信息嗷文件\n");
    printf("0. 返回欢迎界面\n");

    scanf("%d", &decision);
    while (decision < 0 || decision > 11)
    {
        printf("输入错误！请重试！\n");
        fflush(stdin); //清空缓冲区
        scanf("%d", &decision);
    }
    printf("debug: 决定 %d\n", decision);
    return decision;
}

// 根据menu决定操作
int operateMenu(int menuDecision)
{
    switch (menuDecision)
    {
    case 0:
        fflush(stdin); // 清空缓冲区
        spaceWelcome();
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 10:
        break;
    case 11:
        break;
    default:
        printf("debug: 传参错误\n");
        break;
    }
    return 0;
}
