#include <stdio.h>

int main(void) {
	int i, n;
	printf("����� ���� : ");
	scanf_s("%d", &n);
	/*for (i = 0; i < n;i++) {
		printf("Hello World\n");
	}*/
	//for(	;n-->0;	){
	while( n-- > 0 ) {
		printf("Hello World\n");
	}
	return 0;
}