#include <stdio.h>

int main(void) {

	int dan, is;

	for (dan = 2; dan < 10; dan++) {
		for (is = 1; is < 10; is++) {
			printf("%d * %d = %d\n", dan, is, dan * is);
		}
	}
	//-----------------
	dan = 2;
	while (dan < 10) {
		is = 1;//��ø�� �ݺ��������� �ݵ�� �ʱ�ȭ�� üũ
		while (is < 10) {
			printf("%d * %d = %d\n", dan, is, dan * is);
			is++;
		}
		dan++;
	}

	return 0;
}