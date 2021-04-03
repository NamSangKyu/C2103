#include <stdio.h>

int main(void) {
	//성적 점수 하나를 입력 받아서 아래 해당하는 성적 등급 출력
	/*
		90~100 성적등급 A
		80~89  성적등급 B
		70~79  성적등급 C
		60~69  성적등급 D
		0 ~59  성적등급 F	
	*/
	int score;

	printf("점수 하나 입력 : ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("성적등급 : A\n");
	else if (score >= 80)
		printf("성적등급 : B\n");
	else if (score >= 70)
		printf("성적등급 : C\n");
	else if (score >= 60)
		printf("성적등급 : D\n");
	else
		printf("성적등급 : F\n");

	return 0;
}