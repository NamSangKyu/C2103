#include <stdio.h>
/*
	local variable(��������) : �ش� ���������� ���� �ִ� ����
	��> �Ű�����, {}�ȿ��� ����� ����(�Լ����� ����� ����)
	Ư¡> stack �޸𸮿� ����, {} ������ ������ 
		 �ٷ� ȸ���Ǵ� �޸�
*/
int sum(int n1, int n2) {
	//&n1 --> n1�� ������ ����� �ּҰ�
	printf("sum n1 : %d\n", &n1);
	return n1 + n2;
}
int main(void) {
	int n1=5, n2=6;
	printf("main n1 : %d\n", &n1);
	sum(n1, n2);

	return 0;
}