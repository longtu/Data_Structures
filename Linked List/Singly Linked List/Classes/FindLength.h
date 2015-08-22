
#include "DataStructure.h"

// 递归版
int getLength_by_Recursive(ListNode* node)
{
	if(node == NULL) return 0;
	return 1 + getLength_by_Recursive(node->next);
}

// 尾递归版,第1次调用 sum赋值0
int getLength(ListNode* node, int sum)
{
	if(node == NULL) return sum;
	return getLength(node->next, ++sum);
}

// 迭代版
int getLength_by_Iterative(ListNode* node)
{
	int sum = 0;
	while (node != NULL) {
		++sum;
		node = node->next;
	}

	return sum;
}