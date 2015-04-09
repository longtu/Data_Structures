

// string-串
/*
	
*/


// __________________________1 串 __________________________
/*
	为了更加深入地了解串这个数据结构，我们需要定义串的ADT，然后再实现串的一些常见操作。串的ADT定义如下：
*/

/*
ADT 串 (String)

Data
	串中的元素仅由一个字符组成，相邻元素具有前驱和后继关系.
	
Operation
StrAssign (&T, chars)
	初始条件：chars是字符串常量。
	操作结果：生成一个其值等于chars的串T。
StrCopy (&T, S)
	初始条件：串S存在。
	操作结果：由串S复制得串T。
StrEmpty(S)
	初始条件：串S存在。
	操作结果：若S为空串，则返回TRUE，否则返回FALSE。 
StrCompare(S, T)
	初始条件：串S和T存在。
	操作结果：若S>T，则返回值>0；若S=T，则返回值＝0；若S < T，则返回值 < 0。
StrLength(S)
	初始条件：串S存在。
	操作结果：返回S的元素个数，称为串的长度。
ClearString (&S)
	初始条件：串S存在。
	操作结果：将S清为空串。
Concat (&T, S1, S2)
	初始条件：串S1和S2存在。
	操作结果：用T返回由S1和S2联接而成的新串。
SubString(&Sub, S, pos, len)
	初始条件：串S存在,1≤pos≤StrLength(S)且0≤len≤StrLength(S)-pos+1
	操作结果：用Sub返回串S的第pos个字符长度为len的子串。
Index(S, T, pos)
	初始条件：串S和T存在,T是非空串，1≤pos≤StrLength(S)。
	操作结果：若主串S中存在和串T值相同的子串，则返回它在主串S中第pos个字符之后第一次出现的位置;否则函数值为0。
Replace (&S, T, V)
	初始条件：串S, T和V存在，T是非空串。
	操作结果：用V替换主串S中出现的所有与T相等的不重叠的子串。
StrInsert (&S, pos, T)
	初始条件：串S和T存在, 1≤pos≤StrLength(S)+1。
	操作结果：在串S的第pos个字符之前插入串T。
StrDelete (&S, pos, len)
	初始条件：串S存在, 1≤pos≤StrLength(S)－len+1。
	操作结果：从串S中删除第pos个字符起长度为len的子串。
DestroyString (&S)
	初始条件：串S存在。
	操作结果：串S被销毁。

endADT

以下5个操作称为最小操作子集：

串赋值StrAssign
串比较StrCompare
求串长StrLength
串联接Concat
求子串SubString

在上述抽象数据类型定义的13种操作中，这5种操作不可能利用其他串操作来实现，
但其他串操作均可在这个最小操作子集上实现。
*/

// 1. 串赋值StrAssign
/* 生成一个其值等于chars的串T */
Status StrAssign(String T,char *chars)
{
	int i;
	if(strlen(chars)>MAXSIZE)
		return ERROR;
	else
	{
		T[0]=strlen(chars);
		for(i=1;i<=T[0];i++)
			T[i]=*(chars+i-1);
		return OK;
	}
}





int StrLength()		// 求串长
{

}





