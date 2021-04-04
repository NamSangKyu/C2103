#include <stdio.h>
//함수 : 일련의 작업과정을 나타낸 코드
//       필요할때마다 불러다 쓰겠다.
//정수 두개를 받아서 두수의 합을 구해주는 함수
//리턴타입 함수명(매개변수){
//	코드 실행 영역
//  return 결과값;
//}
//리턴 O, 매개변수 O
int sum(int n1, int n2) {
	int total = n1 + n2;
	return total;
}
//리턴 O, 매개변수 X
int inputNumber(void) {
	int n;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);
	return n;
}
//리턴 X, 매개변수 O
void printResult(int result) {
	printf("result : %d\n", result);
}
//리턴X, 매개변수 X
void printMessage(void) {
	printf("함수 예제를 실행합니다.......\n");
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
