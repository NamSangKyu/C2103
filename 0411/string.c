#include <stdio.h>

int main(void) {
	char str[] = "Hello World";
	char* ptr = "Hello World"; //문자열 상수
	//SDL 체크가 되어 있을때
	const char* ptr1 = "Hello World";
	printf("%s %s\n", str, ptr);
	str[6] = 'K';
	//에러, 가리키고 있는 문자열은 상수이기 때문에 변경이 불가함
	ptr[6] = 'K';
	//ptr1[6] = 'K';
	printf("%s %s\n", str, ptr);
	//상수
	//const int n = 100;//처음 초기화한 값을 상수화
	//n++;//n은 상수이기 떄문에 변경이 불가
	return 0;
}