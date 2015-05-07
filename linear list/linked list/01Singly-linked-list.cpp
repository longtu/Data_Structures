

// 01 Singly linked list-单向链表
/*
	有的时候，处于内存中的数据并不是连续的。那么这时候，我们就需要在数据结构中添加一个属性，这个属性会记录下面一个数据的地址。有了这个地址之后，所有的数据就像一条链子一样串起来了，那么这个地址属性就起到了穿线连结的作用。
    相比较普通的线性结构，链表结构的优势是什么呢？我们可以总结一下：
    （1）单个节点创建非常方便，普通的线性内存通常在创建的时候就需要设定数据的大小
    （2）节点的删除非常方便，不需要像线性结构那样移动剩下的数据
    （3）节点的访问方便，可以通过循环或者递归的方法访问到任意数据，但是平均的访问效率低于线性表
    那么在实际应用中，链表是怎么设计的呢？我们可以以int数据类型作为基础，设计一个简单的int链表：
*/

/*
	所谓单链表，是指数据节点是单向排列的。一个单链表结点，其结构类型分为两部分：
	1、数据域：用来存储本身数据
	2、链域或称为指针域：用来存储下一个结点地址或者说指向其直接后继的指针。
*/    

#define FALSE 	0
#define TRUE    1

// __________________________1 设计链表的数据结构 __________________________
typedef struct NODE
{
	int				value;
	struct NODE *	next;
}Node,*LinkHead;		// LinkHead 是头指针，*LinkHead 是头结点

// 链表 头结点+头指针 初始化
LinkHead = (Node *)malloc(sizeof(Node));
assert(LinkHead != NULL,"内存分配失败");
LinkHead->next = NULL;
LinkHead->value = NULL;

// __________________________2  创建节点__________________________

Node * createNode()
{
	Node * newNode = NULL;
	newNode = (Node *)malloc(sizeof(Node));
	assert(newNode != NULL,"createNode()faile，内存分配不了");

	newNode->next = NULL;
	return newNode;
}


// __________________________3  链表里面插入新节点 __________________________

insertNode(Node* const LinkHead, int new_value);		// 说明 LinkHead 的值不可以更改。

insertNode(const Node*  LinkHead, int new_value);	// 说明 LinkHead 的指向的结构体的值不可以更改。这样子会不会连结构体里面的值都不可以更改呢
/*
	如何使用 const 限定参数：
*/
// 插入-有序
bool insertNode(Node* const LinkHead, int new_value)
{
	Node* newNode = createNode();
	newNode->value = new_value;

	if (LinkHead->next == NULL)		//空链表
	{
		LinkHead->next = newNode;	
	}else{
		Node* next = LinkHead->next;
		Node* prev = LinkHead;

		// 寻找正确的插入位置，方法是按顺序访问链表，直到到达其值大于或等于新插入值的节点
		while( ( next->value<new_value ) && ( next!=NULL ))
		{
			if( next->value == new_value )return false;		// 插入的新值 已经存在于 链表中了
			prev = next;
			next = prev->next;
		}

		prev->next = newNode;
		newNode->next = next;
	}

	return true;
}



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
void delateList(const Node* pRoot)
{
	while(pRoot != NULL)
	{
		Node* pNext = pRoot->next;
		free(pRoot);
		pRoot = pNext;
	}
}





// __________________________5  查找数据 __________________________
/*
	对单链表进行查找的思路为：对单链表的结点依次扫描，检测其数据域是否是我们所要查好的值，若是返回该结点的指针，否则返回NULL。
	因为在单链表的链域中包含了后继结点的存储地址，所以当我们实现的时候，只要知道该单链表的头指针，即可依次对每个结点的数据域进行检测。 
*/
Node* findDate(const Node* pRoot,int value)
{
	while(pRoot != NULL)
	{
		if( pRoot->value == value )break;
		pRoot = pRoot->next;
	}

	if(pRoot == NULL)
	{
		printf("没有查找到该数据")
	}
	return pRoot;		
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


// __________________________9  合并2个链表 __________________________
/*
	题目：求两个单链表的和
	两个单链表（singly linked list），每一个节点里面一个0-9的数字， 输入就相当于两个大数了。然后返回这两个数的和（一个新list）。
	这两个输入的list 长度相等。 要求是：1. 不用递归。2. 要求算法在最好的情况下，只遍历两个list一次， 最差的情况下两遍。

	其实就相当于 123456789 + 987654321 = ？

	题目分析
	http://www.hawstein.com/posts/add-singly-linked-list.html
*/




// __________________________10  逆转单链表 __________________________
/*
	注意事项：
	01 参数必须是引用，要不然需要传入2级指针，或者返回一个 头指针。
	02 写 中间过程时，脑袋要清醒，这里有点绕
*/


// for循环版本
void reverse_node(Node * &pRoot)
{
	// 错误处理
	if( pRoot == NULL)assert("reverse_node() import is Wrong!")

	// 指针初始化
	Node * thisNode = pRoot;
	Node * nextNode = thisNode->next;
	Node * prevNode;

	// 链表尾
	thisNode->next = NULL;

	// 中间节点的处理
	while( nextNode != NULL)
	{
		prevNode = thisNode;
		thisNode = nextNode;
		nextNode = thisNode->next;

		thisNode->next = prevNode;
	}

	// 更改头指针
	pRoot = thisNode;
}


// 迭代版本：这个就 非常耗内存空间【随着链表长度的增加，占用栈进程的空间也跟着增加】了。