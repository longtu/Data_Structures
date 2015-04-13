# Heap
Heap

## 二叉堆

在程序设计相关领域，堆(Heap)的概念主要涉及到两个方面：

* 一种数据结构，逻辑上是一颗完全二叉树，存储上是一个数组对象（二叉堆）。
* 垃圾收集存储区，是软件系统可以编程的内存区域。

本文所说的堆，指的是前者。

堆排序的时间复杂度是O(nlgN)，与快速排序达到相同的时间复杂度。但是在实际应用中，我们往往采用快速排序而不是堆排序。这是因为快速排序的一个好的实现，往往比堆排序具有更好的表现。堆排序的主要用途，是在形成和处理优先级队列方面。另外，如果计算要求是类优先级队列（比如，只要返回最大或者最小元素，只有有限的插入要求等），堆同样是很适合的数据结构。

**基础知识**

堆一般用数组表示，比如数组A数组的长度Length(A)，堆在数组中的元素个数HeapSize(A)。一般说来，HeapSize(A) <= Length(A)，因为数组A当中可能有一些元素不在堆中。

假设节点I是数组A中下标为i的节点。

* Parent(i) : return Floor(i/2); //I的父节点下标，Floor(i)表示比i小的最大整数。
* Left(i) : return 2*i; //I的左子节点
* Right(i) : return 2*i+1; //I的右子节点

含有n个元素的堆A的高度是: Floor(lgn)。

**堆的基本操作**

* MaxHeapify( A, i ):
保持堆的性质。假设数组A和下标i，假定以Left(i)和Right(i)为根结点的左右两棵子树都已经是最大堆，节点i的值可能小于其子节点。调整节点i的位置。

* BuildMaxHeap( A ):
从一个给定的数组建立最大堆。子数组A[ floor(n/2)+1 .... ... n]中的元素都是树的叶节点(完全二叉树的基本性质)。从索引 ceiling(n/2)开始一直到1，对每一个元素都执行MaxHeapify，最终得到一个最大堆。

* 堆排序 HeapSort( A ):
堆排序算法的基本思想是，将数组A创建为一个最大堆，然后交换堆的根(最大元素)和最后一个叶节点x，将x从堆中去掉形成新的堆A1，然后重复以上动作，直到堆中只有一个节点。

* 优先级队列算法-增加某元素的值(优先级) : HeapIncreaseKey( A, i, key )
增加某一个元素的优先级后（元素的值），该元素应该向上移动，才能保持堆的性质。

* 优先级队列算法-插入一个元素: Insert( S, x ) 将x元素插入到优先级队列S中。
主要思路是，将堆的最后一个叶节点之后，扩展一个为无穷小的新叶节点，然后增大它的值为x的值。

**一些基本定理**

证明过程在别处，以后待补充。

编号为i的父节点为：(i-1)/2
左节点：2*i+1
右节点：2*i+2

**堆排序实现原理**


图1
图2
图3


void HeapSort(int num[] ,int size)
{
    int i;
    int iLength=size;
    
    PrintHeap("Befor Sort:",num,iLength);
    
    BuildHeap(num,size);// 建立小顶堆   
    
    for (i = iLength - 1; i >= 1; i--) {   
        Swap(num, 0, i);// 交换   
        size--;// 每交换一次让规模减少一次   
        PercolateDown(num, 0,size);// 将新的首元素下滤操作 
        PrintHeap("Sort Heap:",num,iLength);  
    }
}
/* 建堆方法，只需线性时间建好；
   建堆的结果：数组的第一个元素（即树根）是所有元素中的最小值，索引小于等于size/2-1的其它元素（即其它非叶子节点）的值都是其所在子树的最小值 */   
void BuildHeap(int num[] ,int size) { 
    int i; 
    //从最后一个非叶子节点开始，对每个非叶子节点进型最小根调整，保证每个根节点都是其子树中的最小值
    for (i = size / 2 - 1; i >= 0; i--) {   
        PercolateDown(num, i,size);// 进行下滤操作
        PrintHeap("Build heap:",num,size);
    }   
}
    
/* 对该数进行下滤操作，直到该数比左右节点都小就停止下滤。
   即对某个根节点的值进行位置下降调整，使该值比其左右子节点都小；
   若该节点是叶子节点，则无法while循环 */
void PercolateDown(int num[] , int index,int size) {   
    int min;// 设置最小指向下标   
    while (index * 2 + 1<size) {// 如果该数有左节点，则假设左节点最小   
        min = index * 2 + 1;// 获取左节点的下标   
        if (index * 2 + 2<size) {// 如果该数还有右节点   
            if (num[min] > num[index * 2 + 2]) {// 就和左节点分出最小者   
                min = index * 2 + 2;// 此时右节点更小，则更新min的指向下标   
            }   
        }   
        // 此时进行该数和最小者进行比较，   
        if (num[index] < num[min]) {// 如果index最小，   
            break;// 停止下滤操作   
        } else {   
            Swap(num, index, min);// 交换两个数，让大数往下沉   
            index = min;// 更新index的指向   
        }   
    }// while   
}




		
		