#include <stdio.h>
/*
	��迡�� ���ڸ� ó����� 
	ASCII �ڵ� 7bit + 1bit
	A <-> 65 
	B <-> 66
	C <-> 67
*/
int main(void) {
	char ch1 = 'A';
	printf("%c %d\n", ch1, ch1);
	printf("%c %x\n", 'A', 'A');
	printf("%c %d\n", 'A'+1, 'A'+1);
	printf("%c %d\n", 'A'+2, 'A'+2);
	printf("%c %d\n", 'Z', 'Z');
	printf("%c %x\n", 'a', 'a');
	printf("%c %x\n", ' ', ' ');

	char ch2;
	printf("���� �ϳ� �Է� : ");
	scanf_s("%c", &ch2);
	printf("ch2 : %c\n", ch2);
	return 0;
}