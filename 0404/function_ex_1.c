#include <stdio.h>
//�Լ� : �Ϸ��� �۾������� ��Ÿ�� �ڵ�
//       �ʿ��Ҷ����� �ҷ��� ���ڴ�.
//���� �ΰ��� �޾Ƽ� �μ��� ���� �����ִ� �Լ�
//����Ÿ�� �Լ���(�Ű�����){
//	�ڵ� ���� ����
//  return �����;
//}
//���� O, �Ű����� O
int sum(int n1, int n2) {
	int total = n1 + n2;
	return total;
}
//���� O, �Ű����� X
int inputNumber(void) {
	int n;
	printf("���� �Է� : ");
	scanf_s("%d", &n);
	return n;
}
//���� X, �Ű����� O
void printResult(int result) {
	printf("result : %d\n", result);
}
//����X, �Ű����� X
void printMessage(void) {
	printf("�Լ� ������ �����մϴ�.......\n");
}
int main(void) {
	int n1, n2;
	printMessage();
	n1 = inputNumber();
	n2 = inputNumber();
	int result = sum(n1, n2);
	printResult(result);
	return 0;
}
