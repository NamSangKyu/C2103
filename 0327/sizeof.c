#include <stdio.h>

int main(void) {
	printf("char : %d\n", sizeof(char));//1
	printf("short : %d\n", sizeof(short));//2
	printf("int : %d\n", sizeof(int));//4
	printf("long : %d\n", sizeof(long));//4
	printf("long long : %d\n", sizeof(long long));//8
	printf("float : %d\n", sizeof(float));//4
	printf("double : %d\n", sizeof(double));//8
	printf("A : %d\n", sizeof('A'));//1
	printf("3.1415 : %d\n", sizeof(3.1415));//8
	float f1 = 3.1415f;
	printf("f1 : %d\n", sizeof(f1));//4

	return 0;
}