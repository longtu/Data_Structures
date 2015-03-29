

// 02 doubly linked list
/*
	
*/

#define FALSE 	0
#define TRUE    1

// __________________________1 设计链表的数据结构 __________________________
typedef struct _DOUBLE_LINK_NODE
{
	struct _DOUBLE_LINK_NODE *prev;
	struct _DOUBLE_LINK_NODE *next;
	int 	value;
} DOUBLE_LINK_NODE;	



// __________________________2  创建节点__________________________

DOUBLE_LINK_NODE * create()
{
	DOUBLE_LINK_NODE * newNode = NULL;
	newNode = (DOUBLE_LINK_NODE *)malloc(sizeof(DOUBLE_LINK_NODE));
	assert(newNode != NULL);

	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}


// __________________________3  链表里面插入值 __________________________



// __________________________4  删除链表 __________________________






// __________________________5  查找数据 __________________________


// __________________________6 删除数据所在节点 __________________________
enum{
	NO_DELATE_OPERATION;
	DELATE_HAPPEN;
}


// __________________________8  计数一个单向链表的节点数 __________________________





