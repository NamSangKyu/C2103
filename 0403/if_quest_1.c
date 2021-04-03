#include <stdio.h>
int main(void) {

	/*
		숫자하나를 입력한 후
		해당 숫자의 약수를 전체를 출력

		숫자 입력 : 10
		숫자 10의 약수 : 1 2 5 10
	*/
	//입력받을 변수, 반복문 제어용 제어변수
	int n, i;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);
	//반복은 1~입력한숫자 
	printf("%d의 약수 : ",n);
	for (i = 1; i < n/2+1; i++) {
	//	나눈 다음에 나머지가 0이냐?
		if (n % i == 0) {
			//약수이니까 출력
			printf("%d ", i);
		}
	}
	printf("%d ", n);

	return 0;
}
