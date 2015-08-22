
#include "DataStructure.h"

// if headNode == NULL 就是没有找到。否则就是找到了。
ListNode* searchNode(ListNode* headNode,int searchdata)
{
	while (headNode != NULL && headNode->data != searchdata) {
		headNode = headNode->next;
	}

	return headNode;
}


