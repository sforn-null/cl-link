#include<stdio.h>

//判断是否被定义

int main()
{
#if defined(ZHANGSAN)
	printf("zhangsan\n");
#endif
	//如果定义了，中间行就参与编译
	return 0;
}

int main()
{
#ifdef ZHANGSAN
	printf("zhangsan\n");
#endif
	//这种写法和上面的 if defined（）是一样的
	return 0;
}


int main()
{
#if !defined(ZHANGSAN)
	printf("zhangsan\n");
#endif
	//如果没有定义，中间行就参与编译
	return 0;
}

int main()
{
#ifndef ZHANGSAN
	printf("zhangsan\n");
#endif
	//如果没有定义，中间行就参与编译
	//与上面的ifdef相对应
	return 0;
}

//这些指令是可以嵌套的