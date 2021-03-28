#include <stdio.h>

int main(void) {

	int i;
	/*
	*		  1     2	   4
		for(초기화;조건식;증감식){
			반복할 일 3
		}
		1 -> 2 -> 3 -> 4  한번 돌고나면 2 -> 3 -> 4 이 순서대로 반복
	
	*/
	for (i=0;i<5;i++) {
		printf("Hello World\n");
	}

	return 0;
}