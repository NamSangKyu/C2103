#include <stdio.h>
/*
	�ݺ�(loop)�� - while, for, do-while
		������ �ڵ带 �ϳ��� ǥ���� �Ͽ�
		���ϴ� ��ŭ ���������� �����Ű�� ����

	���ǽ� : �񱳿����ڿ� �� �����ڸ� �̿��ؼ� ���� ����
			 true / false;
	�ݺ����� ���ǽ��� true ���ȸ� �ݺ�
	while(���ǽ�){
		�ݺ��� �ڵ�
	}
*/
int main(void) {
	int i=0;
	//Hello World�� 5�� ����ϴ� �ڵ�
	while (i<5) {
		printf("Hello World\n");
		i++;
	}
	
	return 0;
}