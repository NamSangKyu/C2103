#include <stdio.h>
//��������(�ܺκ���) : �Լ� �ۿ� ������ ����
//					  �������� ����� �ʱ�ȭ�� ����������
//					  �ڵ����� 0���� �ʱ�ȭ
double pi = 3.1415;
int n;//�ڵ����� 0���� �ʱ�ȭ
double circleArea(double r) {
	printf("circle : %d\n", &pi);
	return r * r * pi;
}

int main(void) {
	printf("main : %d\n", &pi);
	printf("n : %d\n", n);
	printf("������ : %lf\n", circleArea(3.5));
	printf("������ : %lf\n", 3.5*3.5*pi);

	return 0;
}