#include <stdio.h>
int main(void) {
	char str[] = "Hello World";//11글자
	int arr[] = { 1,2,3,4 };

	printf("%d %d\n", sizeof(str), sizeof(arr));
	//     주소값, 문자열
	printf("%d %s\n", str, str);
	printf("널문자 코드 및 출력 : %d %s\n", str[11], str[11]);
	
	str[5] = 0;//문자코드 0은 널문자
	printf("%s\n", str);//문자열 출력시 널문자 이전까지만 출력
	return 0;
}