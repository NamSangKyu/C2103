#include <stdio.h>

int main(void) {
	int n1=15, n2=10, n3=1;
	int and = n1 & n2; //�Ѵ� 1���� 1
	int or = n1 | n2; // ���߿� �ϳ��� 1�̸� 1
	int not = ~n1;	//1 -> 0, 0 -> 1
	int xor = n1 ^ n2;//���� ��Ʈ ���� �ٸ��� 1, ������ 0
	// ��ü ��Ʈ�� �������� �̵�, 1�� �̵��� x2 ȿ��
	int lshift = n3 << 3; 
	// ��ü ��Ʈ�� ���������� �̵�, 1�� �̵��� /2 ȿ��
	int rshift = n1 >> 3;
	printf("and : %d\n", and);
	printf("or : %d\n", or);
	printf("xor : %d\n", xor);
	printf("not : %d\n", not);
	printf("lshift : %d\n", lshift);
	printf("rshift : %d\n", rshift);
	

	return 0;
}