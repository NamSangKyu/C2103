#include <stdio.h>
//scanf_s �ֿܼ��� �Է� �޴� �Լ�
int main(void) {
	int n=0;

	printf("���� �ϳ� �Է� : ");
	//&���� ---> �ش� ������ ����Ǿ��ִ� ��ġ(�ּҰ�)
	scanf_s("%d",&n);

	printf("�Է��Ͻ� �� : %d\n", n);
	return 0;
}