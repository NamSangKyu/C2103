#include <stdio.h>

//�����ϳ� �޾Ƽ� ���� ������ ¦���� 0, Ȧ���� 1�� �����ϴ� �Լ�
//int check(int n) {
//	if (n % 2 == 0)
//		return 0;
//	return 1;
//}
//int check(int n) {
//	return n % 2 == 0 ? 0 : 1;
//}
//static ���� ���� ����� �Լ��� ����ǵ� ��� �������ȴ�
//static ����� stack ������� �ʱ� ����, data ������ ����
int check(int n) {
	static int count = 0;
	count++;
	printf("check �Լ� ���� Ƚ�� : %d\n", count);
	return n % 2;
}
int main(void) {
	check(5);
	check(2);
	check(6);
	check(7);
	check(3);

	return 0;
}