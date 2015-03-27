﻿

// 01 Singly linked list
/*
	有的时候，处于内存中的数据并不是连续的。那么这时候，我们就需要在数据结构中添加一个属性，这个属性会记录下面一个数据的地址。有了这个地址之后，所有的数据就像一条链子一样串起来了，那么这个地址属性就起到了穿线连结的作用。
    相比较普通的线性结构，链表结构的优势是什么呢？我们可以总结一下：
    （1）单个节点创建非常方便，普通的线性内存通常在创建的时候就需要设定数据的大小
    （2）节点的删除非常方便，不需要像线性结构那样移动剩下的数据
    （3）节点的访问方便，可以通过循环或者递归的方法访问到任意数据，但是平均的访问效率低于线性表
    那么在实际应用中，链表是怎么设计的呢？我们可以以int数据类型作为基础，设计一个简单的int链表：
*/

// __________________________1 设计链表的数据结构 __________________________
typedef struct NODE
{
	struct NODE *link;
	int			value;
}Node;


// __________________________2  创建链表__________________________

Node * create()
{
	Node * newNode;
	newNode = (Node *)malloc(sizeof(Node));
	if ( newNode != NULL )
	{
		return newNode;
	}
}

// __________________________3  创建链表__________________________