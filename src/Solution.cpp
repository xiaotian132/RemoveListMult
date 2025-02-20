#include "Solution.h"

// 删除链表中总乘积为10的连续节点
ListNode *Solution::removeSublists(ListNode *head)
{
    // 定义辅助节点
    ListNode *dummy = new ListNode(1);

    // 将辅助节点治愈头节点之前
    dummy->next = head;

    // 是否存在符合要求的子段
    bool deletel = true;

    while (deletel)
    {
        // 运行时先置为false
        deletel = false;

        // 前一节点
        ListNode *pre = dummy;

        // 当前节点
        ListNode *cur = pre->next;

        // 从当前节点向后遍历
        while (cur)
        {
            // 定义累乘 初始化数值为1
            int multValue = 1;

            // 定义临时节点
            ListNode *temp = cur;

            // 定义终止节点
            ListNode *end = cur;

            //双指针产生移动
            while (temp)
            {
                //数值累乘
                multValue *= temp->val;

                //找到连续累乘为10的子链
                if(multValue == 10)
                {
                    //子链结束节点
                    end = temp;
                    break;
                }
                //累乘绝对值>10 或出现0值 则不会再有乘积为10的可能
                else if(abs(multValue > 10) || multValue == 0)
                {
                    end = nullptr;
                    break;
                }

                //temp向后移动
                temp = temp->next;
            }

            //累乘结果判定
            if(multValue == 10)
            {
                //断开子链
                pre->next = end->next;

                //释放子链内存
                deleteListPart(cur, end);

                //重新指定cur
                cur = pre->next;

                //找到子链
                deletel = true;

                //一旦删除子链 结构发生变化 需要重新计算
                break;
            }
            else
            {
                //上一节点与当前节点均向后移动
                pre = cur;
                cur = pre->next;
            }
        }

        //头节点可能被删除 需要重新指定
        head = dummy->next;
    }

    return head;
}

//释放指定区段子链内存
void Solution::deleteListPart(ListNode *start, ListNode *end)
{
    //逐个释放节点内存
    while(start != end)
    {
        ListNode* temp = start;
        start = start->next;
        delete temp;
    }

    //end节点也需要释放
    delete end;
}
