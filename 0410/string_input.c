#include <stdio.h>
int main(void) {

	char str[10];

	printf("문자열 입력 : ");
	//SDL설정을 해제 했을때, 기존에 쓰던 방식, 컴파일러 구버전
	//scanf("%9s", str);
	//SDL 설정이 되어있으면, 현재 컴파일러 버전 
	scanf_s("%s", str, sizeof(str));

	printf("%s\n", str);


	return 0;
}