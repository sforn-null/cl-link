#include<stdio.h>

//#undef
#define MAX 100

int main()
{
	printf("%d\n", MAX);
	#undef MAX
		printf("%d\n", MAX);
		//#undef �Ѷ����MAXɾ��
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
		//��˼�����������__PRINT__
		//��ô�м����д���Ͳ������
		//�����Ҫ�Ϳ���#define __PRINT__
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
		//��˼�����#if����Ϊ��
		//��ô�м����д���Ͳ������
		//���Ϊ�پͲ�����
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
	//�����һ��Ϊ�棬���һ��������룬����������
}