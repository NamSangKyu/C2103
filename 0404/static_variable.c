#include <stdio.h>

//정수하나 받아서 받은 정수가 짝수면 0, 홀수면 1을 리턴하는 함수
//int check(int n) {
//	if (n % 2 == 0)
//		return 0;
//	return 1;
//}
//int check(int n) {
//	return n % 2 == 0 ? 0 : 1;
//}
//static 으로 변수 선언시 함수가 종료되도 계속 유지가된다
//static 선언시 stack 저장되지 않기 때문, data 영역에 저장
int check(int n) {
	static int count = 0;
	count++;
	printf("check 함수 실행 횟수 : %d\n", count);
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