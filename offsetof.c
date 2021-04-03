#include<stdio.h>

//offsetof
//��ṹ���Ա��ƫ����

struct S
{
	char c1;
	int i;
	char c2;
	double d;
};

#define MYoffsetof(sn,mn) (int)&(((sn*)0)->mn)
int main()
{
	struct S s = { 0 };
	printf("%d\n", MYoffsetof(struct S, c1));
	printf("%d\n", MYoffsetof(struct S, i));
	printf("%d\n", MYoffsetof(struct S, c2));
	printf("%d\n", MYoffsetof(struct S, d));
	return 0;
}