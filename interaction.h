#ifndef INTERACTION_H
#define INTERACTION_H

/*  交互设计
    function 都是直接操作，缺少对输入内容的检查
    需要一些检查函数
*/
#include "function.h"

// 交互设计：保存患者信息，返回一个 patient 结构体，然后调用 create_patient(,,,) 函数
struct patient inter_craate_patient();

// 交互设计: 保存医生信息, 返回一个医生结构体
struct doctor inter_create_doctor();

// 交互设：保存身体检查信息，返回身体检查链表的头指针
struct body_Check *inter_create_check();

#endif
