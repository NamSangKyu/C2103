#include <stdio.h>

int main(void) {
	int n = 5;
	//�ܶ� ȸ��(short-circuit)
	//AND�� OR ���꿡�� ���� ���꿡�� �̹� TRUE FALSE�� ��������
	//�ڿ� ���� ������ �����ϰ� ���� ������� �Ѿ
	int result = n > 0 || ++n < 10;
	printf("n : %d\n", n);
	result = n < 0 && ++n > -5;
	printf("n : %d\n", n);

	return 0;
}