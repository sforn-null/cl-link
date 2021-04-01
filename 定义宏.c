#include<stdio.h>

#define MAX(X,Y) (X>Y?X:Y)
//括号必须和名字紧挨着，不能有空格
//求x和y的大小，如果x大于y就输出x，如果y大于x就输出y
//宏的名字，内容，参数

int main()
{
	int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}

//
// 1. 在调用宏时，首先对参数进行检查，
// 看看是否包含任何由#define定义的符号。
// 如果是，它们首先被替换。
// 2. 替换文本随后被插入到程序中原来文本的位置。
// 对于宏，参数名被他们的值替换。
// 3. 最后，再次对结果文件进行扫描，
// 看看它是否包含任何由#define定义的符号。
// 如果是，就重复上述处理过程。
// 
// 注意：
// 1. 宏参数和#define 定义中可以出现其他#define定义的变量。
// 但是对于宏，不能出现递归。
// 2. 当预处理器搜索#define定义的符号的时候，
// 字符串常量的内容并不被搜索。
//

//#和##
//

//#

#define PRINT(X) printf("the value of "#X" is %d\n", X)

int main()
{
	int a = 100;
	int b = 100;
	printf("the value of a is %d\n", a);
	printf("the value of b is %d\n", b);
	//这种时候就不好用一个函数来打印这两个不同的变量
	//这时候就可以用宏
	//但是
    //#define PRINT(X) printf("the value of X is %d\n", X)
	//做不到这个效果
	//而上面的可以做到
	PRINT(a);
	//#的作用就是不让参数被替换
	//也就是这里面的a，会被#X变成"a"，字符串a，不会替换成100
	return 0;
}


//##

#define CAT(X,Y) X##Y
////##可以把X和Y合成一个符号
////两个符号就变成了一个符号了
////shy97
//
int main()
{
	int shy97 = 1999;
	printf("%d\n", CAT(shy, 97));
	//打印出来是1999
	return 0;
}


//#define 的副作用

int main()
{
	int a = 10;
	int b = ++a;
	int b = a + 1;
	//这两个效果是一样的
	//但是++a会使a的值发生变化，因此说++a是有副作用的
}

//将带有副作用的参数传给宏
#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;
	int ret = MAX(a++, b++);
	//int ret = ((a++)>(b++)?(a++):(b++))
	//但算完之后a变成了11，而b变成了13
	printf("a=%d b=%d\n", a,b);
	printf("%d\n", ret);
	//因此最好不要传带有副作用的参数
	return 0;
}