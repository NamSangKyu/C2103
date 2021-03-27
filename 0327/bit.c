#include <stdio.h>

int main(void) {
	int n1=15, n2=10, n3=1;
	int and = n1 & n2; //둘다 1때만 1
	int or = n1 | n2; // 둘중에 하나만 1이면 1
	int not = ~n1;	//1 -> 0, 0 -> 1
	int xor = n1 ^ n2;//서로 비트 값이 다르면 1, 같으면 0
	// 전체 비트를 왼쪽으로 이동, 1개 이동당 x2 효과
	int lshift = n3 << 3; 
	// 전체 비트를 오른쪽으로 이동, 1개 이동당 /2 효과
	int rshift = n1 >> 3;
	printf("and : %d\n", and);
	printf("or : %d\n", or);
	printf("xor : %d\n", xor);
	printf("not : %d\n", not);
	printf("lshift : %d\n", lshift);
	printf("rshift : %d\n", rshift);
	

	return 0;
}