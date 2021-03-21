#include <stdio.h>
//scanf_s 콘솔에서 입력 받는 함수
int main(void) {
	int n=0;

	printf("숫자 하나 입력 : ");
	//&변수 ---> 해당 변수가 저장되어있는 위치(주소값)
	scanf_s("%d",&n);

	printf("입력하신 값 : %d\n", n);
	return 0;
}