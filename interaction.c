#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inputFunc.h"
#include "function.h"

// 交互设计：保存患者信息，返回一个 patient 结构体，然后调用 create_patient(,,,) 函数
struct patient inter_craate_patient()
{
    // 患者结构体
    struct patient pa;
    pa.age = -1;
    pa.register_id = -1;
    strcpy(pa.name, inputCharWithTitle("患者姓名"));
    pa.age = inputAge();
    pa.register_id = inputID("挂号");
    return pa;
}

// 交互设计: 保存医生信息, 返回一个医生结构体
struct doctor inter_create_doctor()
{
    struct doctor oneDoctor;
    strcpy(oneDoctor.name, inputCharWithTitle("医生姓名"));
    strcpy(oneDoctor.level, inputCharWithTitle("医生职称"));
    strcpy(oneDoctor.department, inputCharWithTitle("医生科室"));
    oneDoctor.worker_id = inputID("工号");
    // 一周上班多少天
    int *p;
    p = inputWork();
    for (int i = 0; i <= 7; i++)
    {
        oneDoctor.visit[i] = p[i];
    }
    // // debug
    // printf("\nDEBUG!!\n");
    // printf("%s\n", oneDoctor.name);
    // printf("%s\n", oneDoctor.level);
    // printf("%s\n", oneDoctor.department);
    // printf("%d\n", oneDoctor.worker_id);

    // for (int j = 0; j <= 7; j++)
    // {
    //     printf("[%d]", oneDoctor.visit[j]);
    // }
    return oneDoctor;
}

// 交互设：保存身体检查信息，返回身体检查链表的头指针
struct body_Check *inter_create_check()
{
    // var
    int isNext = 1; // flag
    char temp_name[20];
    int temp_price = 0;
    // Input name
    strcpy(temp_name, inputCharWithTitle("检查项目名称"));
    // Input price
    temp_price = inputPrice();

    // 链表形式 插入
    struct body_Check *check_head, *node, *end; // return the head, use the head can visit the whole list

    // insert
    check_head = (struct body_Check *)malloc(sizeof(struct body_Check));
    end = check_head;

    strcpy((end->name), temp_name);
    end->price = temp_price;
    end->next = NULL;
    // insert including previous

    while (isNext == 1)
    {
        // check isNext
        printf("是否还有其他检查项目，是则输入 1，否则输入 0\n");
        scanf("%d", &isNext);
        fflush(stdin);
        while (isNext != 1 && isNext != 0)
        {
            printf("输入有误，请重试！\n");
            scanf("%d", &isNext);
            fflush(stdin);
        }

        // next
        if (isNext == 0)
        {
            end->next = NULL;

            // DEBUG
            // printf("DEBUG NOW!!\n");
            // struct body_Check *debug_visit;
            // debug_visit = check_head;
            // while (debug_visit != NULL)
            // {
            //     printf("%s\n", debug_visit->name);
            //     printf("%d\n", debug_visit->price);
            //     debug_visit = debug_visit->next;
            // }
            // printf("DEBUG DONE!!\n");
            return check_head;
        }
        else if (isNext == 1)
        {
            // Input name
            strcpy(temp_name, inputCharWithTitle("检查项目名称"));
            // Input price
            temp_price = inputPrice();
            // insert new
            node = (struct body_Check *)malloc(sizeof(struct body_Check));
            strcpy((node->name), temp_name);
            node->price = temp_price;
            end->next = node;
            end = node;
        }
        else
        {
            printf("ERR!");
        }
    }
}
