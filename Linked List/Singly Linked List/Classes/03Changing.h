
#include "DataStructure.h"

void changeNode(ListNode* headNode,int olddata, int newdata)
{
	while (headNode != NULL && headNode->data != olddata) {
		headNode = headNode->next;
	}

	
	if (headNode == NULL ) return;		// If key was not present in linked list

	headNode->data = newdata;
}