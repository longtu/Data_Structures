

#include<cstdio>
#include<stdlib.h>
#include "DataStructure.h"
#include<cassert>




 /*
	+---+-----+    
	|  C语言  |    
	+---+-----+    
 */ 
void create_linked_by_C()
{
	struct S_NODE* head 	= (struct S_NODE*)malloc(sizeof(struct S_NODE));
	struct S_NODE* second 	= (struct S_NODE*)malloc(sizeof(struct S_NODE));
	struct S_NODE* third 	= (struct S_NODE*)malloc(sizeof(struct S_NODE));

	assert(head != NULL,"内存分配失败");
	assert(second != NULL,"内存分配失败");
	assert(third != NULL,"内存分配失败");

	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;

	printList_by_c(head);
}	

 /*
	+---+-----+    
	| C++语言 |    
	+---+-----+    
 */ 
void create_linked_by_typedef()
{
	T_NODE* head 	= (T_NODE*)malloc(sizeof(T_NODE));
	T_NODE* second 	= (T_NODE*)malloc(sizeof(T_NODE));
	T_NODE* third 	= (T_NODE*)malloc(sizeof(T_NODE));

	assert(head != NULL,"内存分配失败");
	assert(second != NULL,"内存分配失败");
	assert(third != NULL,"内存分配失败");

	head->data = 4;
	second->data = 5;
	third->data = 6;
	head->next = second;
	second->next = third;
	third->next = NULL;

	printList_by_template(head);
}

void create_linked_by_class()
{
	ListNode* head 		= new ListNode(7);
	ListNode* second	= new ListNode(8);
	ListNode* third		= new ListNode(9);

	head->next = second;
	second->next = third;

	printList_by_template(head);
}

