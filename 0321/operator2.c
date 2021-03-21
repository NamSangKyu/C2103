#include <stdio.h>

int main(void) {
	int num = 10;
	//복합대입연산자 += -= *= /= %=
	num += 10;//num = num + 10;
	printf("%d\n", num); 
	num -= 4; //num = num - 4;
	printf("%d\n", num); 
	num *= 2;//num = num * 2;
	printf("%d\n", num); 
	num /= 4;//num = num / 4;
	printf("%d\n", num); 
	num %= 3;//num = num % 3;
	printf("%d\n", num); 
	return 0; 
}

