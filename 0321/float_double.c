#include <stdio.h>

int main(void)
{
	//�Ǽ�(�Ҽ��� �ִ� ����)�� �����ϱ����� ���� Ÿ��
	//float(4 byte)      double(8 byte)
	float f1 = 3.14154444f;//float�� ��� �� ���� f�� ����
	double d1 = 3.1415;//f�� �Ⱥ����� ������ double ����

	//float, double ���
	printf("f1 : %.3f\n", f1);
	printf("d1 : %lf\n", d1);

	return 0;
}