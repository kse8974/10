#include <stdio.h>
#include <stdlib.h>
 
 typedef struct linknd{
	int data;
	
	void*next;
	// struct linknd *next;
} linknd_t;

//struct linked nd;      =  linknd_t nd;    typedef�� Ư¡��. 

 static linknd_t *list; 			//linked list ��ü , ���� �ǵ�� �ִ�!!!
 
 
 linknd_t* create_node(int value){
 	linknd_t* ndPtr;
 	
 	// ���� �޸� �Ҵ�(����ü ����Ʈ ����ŭ)
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t));
	
	if(ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	
	// ������ ���� 
	 ndPtr->data = value;
	 ndPtr->next = NULL;			// �ʱ�ȭ�� �� �ؾ���. �ٽ�!! 
	 

 	return ndPtr;
 } 





