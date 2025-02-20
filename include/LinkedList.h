#pragma once
#include <iostream>
#include <string>

// 链表节点结构定义
struct ListNode
{
    // 节点数据域
    int val;

    // 节点指针域
    ListNode *next;

    // 节点创建函数
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 链表处理类
class LinkedList
{
public:
//**********************构造函数与析构函数***********************//

/*
函数名称:      默认构造函数 初始化头指针 
*/
LinkedList() : m_Head(nullptr){}

/*
函数名称:      析构函数 
*/
~LinkedList();

//**************************功能函数****************************//

/*
函数名称:       尾插法添加链表元素
val:            插入数值
*/
void append(int val);

/*
函数名称:       打印链表
*/
void printList();

/*
函数名称:       获取头节点指针
*/
ListNode* getHead();

/*
函数名称:       设置头节点指针
head:           头节点指针
*/
void setHead(ListNode* head);

private:
    //链表头节点
    ListNode *m_Head;
};