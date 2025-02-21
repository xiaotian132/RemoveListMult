#include "LinkedList.h"
#include "Solution.h"

int main(int argc, char *argv[])
{
    // 新建链表
    LinkedList tagList;
     
    //打印输入
    for(int i = 1; i<argc; i++){
        tagList.append(atoi(argv[i]));
    }
    std::cout << "TagList: ";
    tagList.printList();

    //处理求解
    Solution s1;
    ListNode* newHead = s1.removeSublists(tagList.getHead());

    //求解输出
    tagList.setHead(newHead);
    std::cout << "ResList: ";
    tagList.printList();

    return 0;
}