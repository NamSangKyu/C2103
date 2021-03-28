#include <stdio.h>
/*
입력한 숫자 개수를 입력 받은 후

해당 개수만큼 숫자를 입력받아서 입력 받은 숫자들의 평균을 출력, 단 평균 값은 소수점까지 나타내시오.

예시>
입력할 숫자 개수 : 6
숫자 입력 : 7
숫자 입력 : 5
숫자 입력 : 9
숫자 입력 : 11
숫자 입력 : 15
숫자 입력 : 17

입력하신 숫자들의 평균 : 10.66666
*/
int main(void) {
	int n, i, num;
	double total = 0.0;

	printf("입력 받을 숫자 개수 입력 : ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("숫자 입력 : ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("입력하신 숫자들의 평균 : %g\n", total / n);
	return 0;
}



