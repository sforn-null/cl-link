#include<stdio.h>

//�ж��Ƿ񱻶���

int main()
{
#if defined(ZHANGSAN)
	printf("zhangsan\n");
#endif
	//��������ˣ��м��оͲ������
	return 0;
}

int main()
{
#ifdef ZHANGSAN
	printf("zhangsan\n");
#endif
	//����д��������� if defined������һ����
	return 0;
}


int main()
{
#if !defined(ZHANGSAN)
	printf("zhangsan\n");
#endif
	//���û�ж��壬�м��оͲ������
	return 0;
}

int main()
{
#ifndef ZHANGSAN
	printf("zhangsan\n");
#endif
	//���û�ж��壬�м��оͲ������
	//�������ifdef���Ӧ
	return 0;
}

//��Щָ���ǿ���Ƕ�׵�