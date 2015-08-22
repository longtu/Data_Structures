

#include<cstdio>
#include<stdlib.h>

#include "DataStructure.h"


void deleteNode(ListNode* &headNode, int finddata)
{
	ListNode* deleteNode = headNode;

	if (headNode->data == finddata) {		// If head node itself holds the key to be deleted
		headNode = headNode->next;
	} else {
		ListNode* prevNode  = deleteNode;
		while (deleteNode != NULL && deleteNode->data != finddata) {
			prevNode = deleteNode;
			deleteNode = deleteNode->next;
		}
		if(deleteNode == NULL) return;	// If key was not present in linked list
		prevNode->next = deleteNode->next;
	}

	free(deleteNode);					// Free memory
}