#include "LinkedList.h"

// 析构函数
LinkedList::~LinkedList()
{
    // 逐一删除链表中的元素
    while (this->m_Head)
    {
        ListNode *temp = this->m_Head;
        this->m_Head = this->m_Head->next;
        delete temp;
    }
}

// 尾插法添加链表元素
void LinkedList::append(int val)
{
    // 新建链表节点
    ListNode *newNode = new ListNode(val);

    // 若为空链表 直接作为头节点
    if (!this->m_Head)
    {
        this->m_Head = newNode;
        return;
    }

    // 非空链表 在末尾添加节点
    // 获取头节点
    ListNode *temp = this->m_Head;

    // 定位到链表最后一个节点
    while (temp->next)
    {
        temp = temp->next;
    }

    // 添加新节点
    temp->next = newNode;
}

// 打印链表
void LinkedList::printList()
{
    // 获取头节点
    ListNode *temp = this->m_Head;

    //逐个打印节点数值
    while (temp)
    {
        std::cout << temp->val << "->";
        temp = temp->next;
    }

    std::cout << "NULL" << std::endl;
}

//获取头节点指针
ListNode *LinkedList::getHead()
{
    return this->m_Head;
}

//设置头节点指针
void LinkedList::setHead(ListNode *head)
{
    this->m_Head = head;
}
