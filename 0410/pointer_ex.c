#include <stdio.h>
/*
	������ ����
	1. �����ʹ� �޸� �ּҰ��� �����ϴ� ����(�Ϲݰ� X)
	2. �޸� �ּҰ� ���� -> 1byte - 1�ּ�
*/
int main(void) {
	int num = 10;
	int* ptr;//������ ������ �߰��� * �־ ����
	ptr = &num;

	printf("%d %d\n", ptr, &num); //ptr == &num
	printf("%d %d\n", *ptr, num); //*ptr == num
	num++;
	printf("%d %d\n", *ptr, num); //*ptr == num
	*ptr += 10;
	printf("%d %d\n", *ptr, num); //*ptr == num

	return 0;
}