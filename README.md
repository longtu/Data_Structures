# Data_structures
Data structures


## 数据的逻辑结构
数据的逻辑结构包括线性结构、树、图、集合这四种，在线性结构里面又有线性表、栈、队列等等。

## 数据的存储结构
数据的存储结构只有两种：顺序存储结构和链式存储结构，这两种存储结构，前面一个是利用数据元素在存储器中的相对位置表示其逻辑结构，另外一个是用指针来表示其逻辑关系。

**结论：线性表在逻辑结构方面是线性结构，它的存储结构可以是顺序存储结构-动态数组。也可以是链式存储-链表**

### Linked list 链表


#### 单向链表



**学习数据结构有什么用？** ==================================================

【来源知乎】
个人认为数据结构是编程最重要的基本功没有之一！

学了顺序表和链表，你就知道，在查询操作更多的程序中，你应该用顺序表；而修改操作更多的程序中，你要使用链表；而单向链表不方便怎么办，每次都从头到尾好麻烦啊，怎么办？你这时就会想到双向链表or循环链表。

学了栈之后，你就知道，很多涉及后入先出的问题，例如函数递归就是个栈模型、Android的屏幕跳转就用到栈，很多类似的东西，你就会第一时间想到：我会用这东西来去写算法实现这个功能。

学了队列之后，你就知道，对于先入先出要排队的问题，你就要用到队列，例如多个网络下载任务，我该怎么去调度它们去获得网络资源呢？再例如操作系统的进程（or线程）调度，我该怎么去分配资源（像CPU）给多个任务呢？肯定不能全部一起拥有的，资源只有一个，那就要排队！那么怎么排队呢？用普通的队列？但是对于那些优先级高的线程怎么办？那也太共产主义了吧，这时，你就会想到了优先队列，优先队列怎么实现？用堆，然后你就有疑问了，堆是啥玩意？自己查吧，敲累了。

总之好好学数据结构就对了。我觉得数据结构就相当于：我塞牙了，那么就要用到牙签这“数据结构”，当然你用指甲也行，只不过“性能”没那么好；我要拧螺母，肯定用扳手这个“数据结构”，当然你用钳子也行，只不过也没那么好用。学习数据结构，就是为了了解以后在IT行业里搬砖需要用到什么工具，这些工具有什么利弊，应用于什么场景。以后用的过程中，你会发现这些基础的“工具”也存在着一些缺陷，你不满足于此工具，此时，你就开始自己在这些数据结构的基础上加以改造，这就叫做自定义数据结构。而且，你以后还会造出很多其他应用于实际场景的数据结构。。你用这些数据结构去造轮子，不知不觉，你成了又一个轮子哥。




## Markdown学习教程==================================================

MarkdownPad编辑器 使用
粗体 (Ctrl+B) and 斜体 (Ctrl+I)
引用 (Ctrl+Q)
代码块 (Ctrl+K)
标题 1, 2, 3 (Ctrl+1, Ctrl+2, Ctrl+3)
列表 (Ctrl+U and Ctrl+Shift+O)




字体 Styling Text：
斜体： *This text will be italic*  （对应HTML中的标签）
粗体：**This text will be bold** （对应HTML中的标签）

列表 Lists：
无序号的列表 Unordered Lists
* item 
* item
或者
- item
- item

# Title
    if x > y:
        print x
		
		
### GitHub中README.md添加图片方式

首先找到repo中图片，点击图片可获得路径，如：

https@//github.com/younghz/Markdown/blob/master/Res/Aaron_Swartz.jpg
以Markdown语法如：

![Aaron Swartz](https://github.com/younghz/Markdown/raw/master/Res/Aaron_Swartz.jpg)形式添加到README文件中即可，但是需要注意的是在下面的链接中需将blob改为raw。

![背景资料](pic/APK解包图.png "背景资料") 背景资料是父级文件夹	