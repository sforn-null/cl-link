#include<stdio.h>

//#undef
#define MAX 100

int main()
{
	printf("%d\n", MAX);
	#undef MAX
		printf("%d\n", MAX);
		//#undef 把定义的MAX删了
	return 0;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		arr[i] = i;
#ifdef __PRINT__
		printf("%d\n", arr[i]);
#endif 
		//意思是如果定义了__PRINT__
		//那么中间那行代码就参与编译
		//如果需要就可以#define __PRINT__
	}
	return 0;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		arr[i] = i;
#if 1
		printf("%d\n", arr[i]);
#endif 
		//意思是如果#if后面为真
		//那么中间那行代码就参与编译
		//如果为假就不参与
	}
	return 0;
}

int main()
{
#if 1
	printf("1\n");
#elif 2
	printf("2\n");
#else
	printf("hehe\n");
#endif
	return 0;
	////如果第一个为真，则第一个参与编译，挨个往下来
}
