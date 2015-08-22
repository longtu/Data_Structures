

#include "DataStructure.h"

// 添加到头部
template<typename T, typename D>		// T是个指针
void push_use_template(T* &node, D newdata)
{
	T* newNode = new T(newdata);
	newNode->next = node;
	node = newNode;
}

void push(ListNode* &node, int newdata)
{
	ListNode* newNode = new ListNode(newdata);
	newNode->next = node;
	node = newNode;
}

// 添加到尾部
void append(ListNode* node, int newdata)
{
	ListNode* newNode = new ListNode(newdata);
	while(node->next != NULL) {
		node = node->next;
	}

	node->next = newNode;
}

// 添加到一个节点的后面
void insertAfter(ListNode* prevNode, int newdata)
{
	ListNode* newNode = new ListNode(newdata);
	newNode->next = prevNode->next;
	prevNode->next = newNode;
}


