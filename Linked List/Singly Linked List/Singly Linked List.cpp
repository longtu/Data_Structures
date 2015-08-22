// Singly Linked List.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"

//#include "Inserting a node.h"
//#include "Introduction.h"
//#include "00Create.h"
#include "01Inserting.h"
#include "02Deleting.h"
#include "03Changing.h"
#include "FindLength.h"


void inserting_test()
{
	ListNode* headNode = new ListNode(0);
	push(headNode, 2);
	push_use_template(headNode, 3);
	push(headNode, 4);
	push_use_template(headNode, 5);
	push(headNode, 8);

	append(headNode, -1);
	append(headNode, -2);
	append(headNode, -3);

	insertAfter(headNode, 10);
	insertAfter(headNode, 20);
	insertAfter(headNode, 30);

	deleteNode(headNode, 21);
	deleteNode(headNode, 8);
	deleteNode(headNode, -3);

	changeNode(headNode, 10, 100);

	printf("\n Created Linked list is: ");
	printList_by_template(headNode);
	printf("\n Created Linked list length is: ");
	printf(" %d ", getLength_by_Recursive(headNode));
	printf(" %d ", getLength(headNode, 0));
	printf(" %d ", getLength_by_Iterative(headNode));
}

int _tmain(int argc, _TCHAR* argv[])
{
	//main_Inserting_a_node();
	//Linked_List_Traversal();

	//create_linked_by_C();
	//create_linked_by_typedef();
	//create_linked_by_class();


	inserting_test();

	getchar();
	return 0;
}

