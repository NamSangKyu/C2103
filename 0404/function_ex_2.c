#include <stdio.h>
//�Լ� ���� 
int minus(int n1, int n2);
int min(int n1, int n2);
int max(int n1, int n2);
int main(void) {
	printf("%d\n", minus(10, 20));
	return 0;
}
int minus(int n1, int n2) {
	return max(n1,n2) - min(n1,n2);
}
//max �Լ��� �� �����߿� ū ���ڸ� �����ϴ� �Լ�
//int max(int n1, int n2) {
//	int result=n2;
//	if (n1 > n2)
//		result = n1;
//	return result;
//
//}
//int max(int n1, int n2) {
//	if (n1 > n2)
//		return n1;
//	//else
//		return n2;
//}
int max(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}
//min �Լ��� �� �����߿� ���� ���ڸ� �����ϴ� �Լ�
int min(int n1, int n2) {
	return n1 < n2 ? n1 : n2;
}