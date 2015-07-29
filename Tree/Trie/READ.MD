

# 字典树

Trie树(字典树) 【好好看】
>
http://ching.im/post/algorithm/trie-tree

后缀树简介
>
http://www.acmerblog.com/suffix-tree-6152.html

# 后缀数组

后缀数组原理及应用详解 【讲的挺好的】
>
http://blog.csdn.net/lmh12506/article/details/7975548

对“小罗”写的那篇论文的注释版本
>
http://www.cnblogs.com/staginner/archive/2012/02/02/2335600.html

后缀数组  【功能非常强大，字符串匹配的利器】
>
http://blog.sina.com.cn/s/blog_a2dce6b30101l1li.html

后缀数组总结 【代码颜色挺漂亮的-用的 Sublime Text 编辑器】
>
http://www.miaozc.com/%E5%90%8E%E7%BC%80%E6%95%B0%E7%BB%84%E7%9A%84%E7%AE%80%E5%8D%95%E6%80%BB%E7%BB%93/

后缀数组解题方法总结 【有各种 实际应用 + 题目中的应用】
>
http://tieba.baidu.com/f?kz=754580296


## 可能用到的应用场景

最长公共子串问题的后缀数组解法
>
https://www.byvoid.com/blog/lcs-suffix-array


## 总结一下要点

- 利用倍增算法在O(nlogn)的时间内对后缀数组进行排序

- 利用h数组的性质在O(n)的时间内求出储存排序后相邻后缀间的LCP数的组height

- 利用LCP的性质将平凡LCP问题转化为height数组上的RMQ问题




## 后缀数组的【实现】：陪增算法 和 DC3算法

【白话系列】倍增算法【作者写作方法 非常适合我们这种 靠图思维的人，大赞】   
>
http://blog.csdn.net/jarjingx/article/details/8180560

后缀数组倍增算法的理解
>
http://ching.im/post/algorithm/doubling-algorithm

后缀数组DC3构造算法的理解
>
http://ching.im/post/algorithm/difference-cover-modulo-algorithm


## Height数组
 
计算后缀数组的Height数组
>
http://ching.im/post/algorithm/calculate-height-array



## LCP问题 和 RMQ问题  

wiki百科  
>
https://zh.wikipedia.org/wiki/%E8%8C%83%E5%9B%B4%E6%9C%80%E5%80%BC%E6%9F%A5%E8%AF%A2

算法之LCA与RMQ问题
>
http://dongxicheng.org/structure/lca-rmq/

**参考资料**  
1.  判断两个链表是否相交   http://blog.csdn.net/ldong2007/article/details/4544203  
2.  博文《LCA问题（含RMQ的ST算法）》http://www.cppblog.com/Icyflame/archive/2009/07/04/88987.html  
3.  博文《Range Minimum Query and Lowest Common Ancestor》【打不开这个网址，好奇怪】 http://www.topcoder.com/tc?module=Static&d1=tutorials&d2=lowestCommonAncestor#Range_Minimum_Query_%28RMQ%29   
4.  博文《LCA问题（最近公共祖先问题）+ RMQ问题》 http://ayzk.wordpress.com.cn/archives/14  
5.  博文《最近公共祖先(LCA)的Tarjan算法》  地址失效，需要搜索  
6.  博文《LCA 最近公共祖先的Tarjan算法》 	地址失效，需要搜索  


**RMQ**  
RMQ（Range Minimum/Maximum Query），即区间最值查询

RMQ (Range Minimum/Maximum Query)算法  【讲的真好，但是没有咋看懂，blog主人 好NB】  
>
http://blog.csdn.net/niushuai666/article/details/6624672

RMQ-Sparse Table算法
>
http://blog.sina.com.cn/s/blog_a2dce6b30101l1w8.html