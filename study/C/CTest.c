#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>			

#include "ADD.h"

#define ten 10		
#define MAX(X,Y) (X>Y?X:Y)
//����� - int a = MAX(b,c);

/*
srand  --  rand -- RAND_MAX  --��Ҫ����趨����  -- ���% �޶���Χ
Sleep()  --Windows.h
system("cls")
NULL  -- ��ָ��
time  -- ����t_time ���͵�ʱ���
��������������ָ��  sizeof ==>������
������ ��������Ԫ�ص�ַ  arr  <==>  &arr[0]
����&arr ==> ��������ĵ�ַ
sizeof(arr)  ==> ��������Ĵ�С
ָ��������������Ԫ�ظ���
ֻ����ָ��Ƚ�������ĺ�һ��Ԫ��
*/

static int a = 10;
//��̬ȫ�ֱ���/����-��ʾ�������������޶��ڶ�������Դ�ļ���
//��̬�ֲ�����-���������ӳ���������

int main() {
	for (int i = 0; i <= 5; i++) {
		if (i == 3) continue;
		printf("%d", i);
	}
	return 0;
}			

struct Book {
	char name[20];
	int price;
};
int struct_part() {
	struct Book b1 = {"C development",50};

	b1.price = 30;
	printf("%d", b1.price);

	struct Book* pb = &b1;
	printf(" %s", pb -> name);
	return 0;
}

int p_part() {
	int a = 10;
	int* p = &a;
	printf("%d %p \n", a, p);
	*p = 20;
	printf("%d %p \n", a, p);
	p = 20;
	printf("%d %p \n", a, p);
	// *p <==> a
	// p <==> &a
	// ָ���С   32λ ==> 4bit   64λ ==> 8bit
	return 0;
}

int define_part() {
	int a, b;
	a = ten;
	b = 9;
	b = a + b;
	printf("%d %d", a, b);
	return 0;
}

int scanf_part() {
	int a,b;
	printf("please send me a number to remember : ");
	b=scanf("%d", &a);		//���뻺����   []  -->   [��������\n]  (scanf)-->  [\n]
	printf("a=%d b=%d", a,b);
	return a;
}

int getputchar_part() {
	int a;
	printf("send me a message :");
	a = getchar();
	putchar(a);
	return 0;
}

int forwhile_part() {
	int i = 0;

	for (;;) {
		printf("An endless routine\n");
		break;
	}

	printf("A for-form count routine");

	for (int i = 0; i < 5; i++) {
		printf(" %d",i);
	}

	printf("\ncurrent i : %d", i);
	printf("\nA while-form count routine");

	while (i<5) {
		printf(" %d", i++);
	}

	printf("\ncurrent i : %d", i);
	
	i = 0;
	printf("\nA do-while-form count routine");
	do {
		printf(" %d", i++);
	} while (i < 5);

	printf("\ncurrent i : %d", i);
	return 0;
}

int choice_part() {
	int a = 5 , n = 5;
	if (8 < n <= 10) {
		printf( "1");
	}
	else if (6 < n <= 8) {
		printf("2");
	}
	else { printf("3"); }
	printf("\n");
	switch (a) {
	case 5://case ֻ�ܸ�����
	case 4:
		printf("1");
		break;
	case 3:
	case 2:
		printf("2");
		break;
	case 1:
		printf("3");
		break;
	default :
		printf("error");
	}
	printf("\n");

	(n + a == 10) ? printf("great"): printf("normal");// a ? b : c ==>   if a:b  else:c

	return 0;
}
/*
	int a = 1000L;	==>������
	int b = 100U;	==>�޷������� unsigned
	int c = 0180;	==>�˽���
	int d = 0x180;	==>ʮ������

	a && b  ==>��
	a || b  ==>��

	auto  ==>�Զ�����
	const    ���г����� ==>���ɸ���		���Ǳ���==>����������
	register  ==>���鴢�浽�Ĵ���   �Ĵ���==>���ٻ���==>�ڴ�==>������
	unsigned  ==>�޷��ű���

	&a  ==>ȡ��ַ
	int*  ==>ָ�����/�����ò�����

*/
int arr_part() {
	int num[10] = { 0 };
	printf("%d", num[0]);
	return 0;
}
enum Sex {
	MALE=1,FEMALE,UNKNOOWN
};
int enum_part() {
	printf("male is %d\n",MALE);	//�൱��define

	enum Color {RED,BLUE,YELLOW};
	enum Color color1 = RED;
	enum Color color2 = 2;
	printf("%d %d",color1,color2);
	return 0;
}

int strring_part() {
	char s1[] = "101";//{'1','0','1','\0'}
	printf("%s",s1);
	/*
	"string" == "string"  ==> false 
	strcmp("","")  ==> 0

	char[] a = {1,2,3}		==> {1,2,3}
	char[] a = "123"		==> {'1','2','3',\0}
	*/
	return 0;
}
