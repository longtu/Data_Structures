

// 01 Singly linked list
/*
	有的时候，处于内存中的数据并不是连续的。那么这时候，我们就需要在数据结构中添加一个属性，这个属性会记录下面一个数据的地址。有了这个地址之后，所有的数据就像一条链子一样串起来了，那么这个地址属性就起到了穿线连结的作用。
    相比较普通的线性结构，链表结构的优势是什么呢？我们可以总结一下：
    （1）单个节点创建非常方便，普通的线性内存通常在创建的时候就需要设定数据的大小
    （2）节点的删除非常方便，不需要像线性结构那样移动剩下的数据
    （3）节点的访问方便，可以通过循环或者递归的方法访问到任意数据，但是平均的访问效率低于线性表
    那么在实际应用中，链表是怎么设计的呢？我们可以以int数据类型作为基础，设计一个简单的int链表：
*/

#define FALSE 	0
#define TRUE    1

// __________________________1 设计链表的数据结构 __________________________
typedef struct NODE
{
	int				value;
	struct NODE *	next;
}Node;



// __________________________2  创建节点__________________________

Node * create()
{
	Node * newNode = NULL;
	newNode = (Node *)malloc(sizeof(Node));
	assert(newNode != NULL);

	newNode->next = NULL;
	return newNode;
}


// __________________________3  链表里面插入值 __________________________
// 程序12.3 插入到一个有序的单链表：最终版本【来源于《C和指针》的习题】
int thr_insert(Node  **pRoot, int new_value)
{
	Node *current = *pRoot;			// 这条语句对根指针参数执行间接访问操作，得到的结果是root的值
	Node *newNode;


	// 寻找正确的插入位置，方法是按顺序访问链表，直到到达其值大于或等于新插入值的节点
	while( ( NULL != current )&&	// 如果到达 尾节点了。
		( current->value < new_value ) )
	{
		pRoot = &current->link;
		current = *pRoot;
	}

	// 为新节点分配内存，并把新值存储到新节点中，如果内存分配失败，函数返回 false.
	newNode = (Node *)malloc(sizeof(Node));
	if ( newNode == NULL)return FALSE;
	newNode->value = new_value;

	// 把新节点插入到链表中，并返回TRUE
	newNode->link = current;		// 即使 current 是NULL也没有关系了
	*pRoot = newNode;
	return TRUE;
} 

result = thr_insert(&root,12);



// __________________________4  删除链表 __________________________






// __________________________5  查找数据 __________________________
Node* findDate(const Node* pRoot,int value)
{
	while(pRoot != NULL)
	{
		if( pRoot->value == value )break;
		pRoot = pRoot->next;
	}

	return pRoot;		// 返回NULL 就是没有找到 
}


// __________________________6 删除数据所在节点 __________________________
enum{
	NO_DELATE_OPERATION;
	DELATE_HAPPEN;
}
int delateDate(const Node* pRoot,int value)		// 这个函数 无法解决 要删除 链表头节点的情况
{
	Node* father 		= pRoot;
	int delate_result 	= NO_DELATE_OPERATION;
	while(pRoot != NULL)
	{
		if( pRoot->value == value )
		{
			father->next = pRoot->next;
			free(pRoot);
			pRoot 	= father->next;
			delate_result 	= DELATE_HAPPEN;
		}
		father = pRoot;
		pRoot = pRoot->next;
	}

	return delate_result;						// 0说明没有进行删除数据的操作。1说明进行了删除数据的操作。
}


int fir_delete(Node  **pRoot, int delete_value)		// 可以删除头节点的版本 【来源于《C和指针》的习题】
{
	Node *current = *pRoot;			// 这条语句对根指针参数执行间接访问操作，得到的结果是root的值
	Node *delete;

	// 寻找 值相同的 节点____________________________________________________
	while( ( NULL != current )&&	// 如果到达 尾节点了。
		( current->value != delete_value) )
	{
		pRoot = &current->link;
		current = *pRoot;
	}

	// 没有找到要删除的值
	if( NULL == current ) return FALSE;

	//
	delete = *pRoot;
	*pRoot = current->link;

	// 把删除节点释放，并返回TRUE,这样free到底可不可以啊
	free(delete);
	return TRUE;
} 


// __________________________8  计数一个单向链表的节点数 __________________________
// 递归版本
int sum(const Node* pRoot)
{
	if(pRoot == NULL)return 0;

	return 1 + sum(pRoot->next);
}

// for循环版本
int sum_node(const Node* pRoot)
{
	int sum; 
	for(sum = 0; pRoot != NULL; sum++ )
	{
		pRoot = pRoot->next;
	}
	return sum;
}




