#include <stdio.h>
//함수 원형 
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
//max 함수는 두 숫자중에 큰 숫자를 리턴하는 함수
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
//min 함수는 두 숫자중에 작은 숫자를 리턴하는 함수
int min(int n1, int n2) {
	return n1 < n2 ? n1 : n2;
}