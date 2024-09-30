#ifndef MY_LINKEDLIST
#define MY_LINKEDLIST

#include<stdlib.h>

/*����Ԫ��
prev -- ǰһ������Ԫ��ָ�� Ĭ��NULL��ͬ
data -- ָ�����ݵ�ָ��
next -- ��һ������Ԫ��ָ��*/
typedef struct linked_list_element {
	struct linked_list_element* prev;
	void* data;
	struct linked_list_element* next;
}LinkedListElement;
/*����(��ֹ������Ԫ�ص�����)
first --��һ������Ԫ��
last --���һ������Ԫ��
ele_num --Ԫ������
size --���ݴ�С*/
typedef struct linked_list {
	LinkedListElement* first;
	LinkedListElement* last;
	unsigned ele_num;
	unsigned size;
}LinkedList;

//�½�������ʼ�� sizeΪԪ�ش�С
LinkedList* newLinkedList( unsigned size);
//�½�����Ԫ�ز���ʼ��
LinkedListElement* newLinkedListElement();
//˳��������� ʧ�ܷ���NULL
LinkedListElement* searchLinkedList(LinkedList* list , void* data);
//����������� ʧ�ܷ���NULL
LinkedListElement* searchLinkedListFromLast(LinkedList* list, void* data);
//����һ������Ԫ��
LinkedListElement* initLinkedList(LinkedList* list, void* data);
//������β�����Ԫ��
LinkedListElement* addLinkedListElementLast(LinkedList* list , void* data);
//�������м����Ԫ��
LinkedListElement* addLinkedListElementMid(LinkedList* list, void* data, unsigned index);
//������ͷ�����Ԫ��
LinkedListElement* addLinkedListElementFirst(LinkedList* list, void* data);
//���������Ԫ��
LinkedListElement* addLinkedListElement(LinkedList* list, void* data, unsigned index);
//˳�������õ�����Ԫ��
LinkedListElement* getLinkedListElement(LinkedList* list, unsigned index);
//���������õ�����Ԫ��
LinkedListElement* getLinkedListElementFromLast(LinkedList* list, unsigned index);
//ɾ����һ������Ԫ�� �����µ�first
LinkedListElement* removeLinkedListElementFirst(LinkedList* list);
//ɾ�����һ������Ԫ�� ����NULL
LinkedListElement* removeLinkedListElementLast(LinkedList* list);
//ɾ��ָ�����м�����Ԫ�� ����ԭ����Ԫ�ص�next
LinkedListElement* removeLinkedListElementMid(LinkedList* list, LinkedListElement* target);
//������ɾ������Ԫ�� ����ԭ����Ԫ�ص�next
LinkedListElement* removeLinkedListElement(LinkedList* list, unsigned index) ;

LinkedList* createLinkedListByArray(void* data,unsigned ele_num ,unsigned size);

/*����Ԫ��
data -- ָ�����ݵ�ָ�� Ĭ��NULL��ͬ
next -- ��һ������Ԫ��ָ��*/
typedef struct slinked_list_element {
	void* data;
	struct slinked_list_element* next;
}sLinkedListElement;
/*����(��ֹ������Ԫ�ص�����)
first --��һ������Ԫ��
ele_num --Ԫ������
size --���ݴ�С*/
typedef struct slinked_list {
	sLinkedListElement first;
	unsigned ele_num;
	unsigned size;
}sLinkedList;


/*
//�½�������ʼ�� sizeΪԪ�ش�С
LinkedList* newLinkedList(unsigned size);
//�½�����Ԫ�ز���ʼ��
LinkedListElement* newLinkedListElement();
//˳��������� ʧ�ܷ���NULL
LinkedListElement* searchLinkedList(LinkedList* list, void* data);
//����һ������Ԫ��
LinkedListElement* initLinkedList(LinkedList* list, void* data);
//������β�����Ԫ��
LinkedListElement* addLinkedListElementFromLast(LinkedList* list, void* data);
//������ͷ�����Ԫ��
LinkedListElement* addLinkedListElement(LinkedList* list, void* data);*/



#endif