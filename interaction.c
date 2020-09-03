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
