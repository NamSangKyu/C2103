#include <stdio.h>
//C언어에서 제공하는 문자열 함수를 사용을 할려면
//string.h 헤더파일을 include 해야됨
#include <string.h>

int main(void) {
	char str1[] = "Hello World";
	char str2[50];
	char str3[] = "Aest world";
	//문자열 길이 - strlen
	int len = strlen(str1);
	printf("str1의 문자열 길이 : %d\n", len);
	//문자열 복사
	//strcpy(str2, str1);//SDL 체크가 해제 되었을때
	strcpy_s(str2, sizeof(str2), str1);//SDL 체크가 되어 있을때
	fputs(str2, stdout);//출력할 대상을 결정, 가지고 있는 내용만 출력
	puts(str2);//문자열 출력함수, 자동으로 줄바꿈
	//문자열 비교 : 결과값으로 0(두 문자열이 같을때)
	//             (두 문자열이 다를때) --> 1, -1
	printf("str1, str2 문자열 비교 : %d\n", strcmp(str1, str2));
	printf("str1, str3 문자열 비교 : %d\n", strcmp(str1, str3));
	return 0;
}