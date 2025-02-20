#pragma once
#include "LinkedList.h"

class Solution
{
public:
    /*
    函数名称:       删除链表中总乘积为10的连续节点
    head:           链表头节点
    */
    ListNode *removeSublists(ListNode *head);

    /*
    函数名称:       释放指定区段子链内存
    start:          起始节点
    end:            结束节点
    */
    void deleteListPart(ListNode *start, ListNode *end);
};