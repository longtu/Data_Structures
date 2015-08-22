
#ifndef Singly_Linked_List_DataStructure
#define Singly_Linked_List_DataStructure

#include<cstdio>
#include<stdlib.h>

// C语言定义结构体
struct S_NODE
{
	int data;
	struct S_NODE *next;
};

// 使用 typedef【C++才有此关键字】
typedef struct Node
{
	int data;
	Node* next;
}T_NODE;

// 使用类
class ListNode {
public:
    int data;
    ListNode *next;
    ListNode(int val) {
        this->data = val;
        this->next = NULL;
    }
};

// 使用模板[好像又不需要模板来定义结构体, 模板函数的时候才需要吧]


// 基本操作
void printList_by_c(struct S_NODE* nowNode)
{
	while(nowNode != NULL) {
		printf(" %d ", nowNode->data);
		nowNode = nowNode->next;
	}
}	

template<typename T>		// 使用模板函数-好吧，C语言里面是没有这个的。
void printList_by_template(T nowNode)
{
	while(nowNode != NULL) {
		printf(" %d ", nowNode->data);
		nowNode = nowNode->next;
	}
}	

#endif // Singly_Linked_List_DataStructure