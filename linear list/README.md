# linear list 线性表
linear list

## 顺序存储结构

## 链式存储结构


![图1](https://github.com/vo01github/Data_Structures/raw/master/linear%20list/pic/linear_list.png)

### Linked list 链表

链表（Linked list）是一种常见的基础数据结构，是一种线性表，但是并不会按线性的顺序存储数据，而是在每一个节点里存到下一个节点的指针(Pointer)。
由于不必须按顺序存储，链表在插入的时候可以达到O(1)的复杂度，比另一种线性表顺序表快得多，但是查找一个节点或者访问特定编号的节点则需要O(n)的时间，而顺序表相应的时间复杂度分别是O(logn)和O(1)。

使用链表结构可以克服数组链表需要预先知道数据大小的缺点，链表结构可以充分利用计算机内存空间，实现灵活的内存动态管理。
但是链表失去了数组随机读取的优点，同时链表由于增加了结点的指针域，空间开销比较大。

可以学习一些基础概念的网址：
http://www.nowamagic.net/librarys/veda/detail/2198

#### 单向链表




		