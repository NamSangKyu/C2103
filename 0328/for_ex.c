#include <stdio.h>

int main(void) {

	int i;
	/*
	*		  1     2	   4
		for(�ʱ�ȭ;���ǽ�;������){
			�ݺ��� �� 3
		}
		1 -> 2 -> 3 -> 4  �ѹ� ������ 2 -> 3 -> 4 �� ������� �ݺ�
	
	*/
	for (i=0;i<5;i++) {
		printf("Hello World\n");
	}

	return 0;
}