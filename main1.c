#include <stdio.h>
#include <stdlib.h>
#include "linknd.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//extern linknd_t *list;		// 나만건들게 만들어놈. 

int main(int argc, char *argv[]) {
	genList();
	
	addTail(10);
	addTail(20);
	addTail(30);
	addTail(40);
	addTail(50);
	
	print_list(3);	
	return 0;
}
