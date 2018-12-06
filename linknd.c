#include <stdio.h>
#include <stdlib.h>
 
 typedef struct linknd{
	int data;
	
	void*next;
	// struct linknd *next;
} linknd_t;

//struct linked nd;      =  linknd_t nd;    typedef의 특징임. 

 static linknd_t *list; 			//linked list 실체 , 나만 건들수 있다!!!
 
 
 linknd_t* create_node(int value){
 	linknd_t* ndPtr;
 	
 	// 동적 메모리 할당(구조체 바이트 수만큼)
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t));
	
	if(ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	
	// 정수값 저장 
	 ndPtr->data = value;
	 ndPtr->next = NULL;			// 초기화를 꼭 해야함. 핵심!! 
	 

 	return ndPtr;
 } 





