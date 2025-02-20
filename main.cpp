#include "LinkedList.h"
#include "Solution.h"

int main(int argc, char *argv[])
{

    // 新建链表
    LinkedList tagList;
    tagList.append(-2);
    tagList.append(5);
    tagList.append(-1);
    tagList.append(-10);
    tagList.append(1);
    tagList.append(-1);
    tagList.append(10);
    tagList.append(2);
    tagList.append(2);
    tagList.append(2);
    tagList.append(5);
    tagList.append(5);

    tagList.printList();

    //处理求解
    Solution s1;
    ListNode* newHead = s1.removeSublists(tagList.getHead());

    tagList.setHead(newHead);
    tagList.printList();

    return 0;
}