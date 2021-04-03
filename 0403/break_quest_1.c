#include <stdio.h>

int main(void) {
	/*
		XY + YX = 99 나오는 조합을 출력
		
		출력결과>
		09 + 90 = 99
		18 + 81 = 99
		...
		90 + 09 = 99

		XY
	+	YX
	------------
		99
	*/
	int X, Y;

	for (X = 0; X < 10; X++) {
		for (Y = 0; Y < 10; Y++) {
			if (X+Y == 9) {
				printf("%d%d + %d%d = %d\n",
					X, Y, Y, X, X * 10 + Y + Y * 10 + X);
				break;
			}
		}
	}
	return 0;
}