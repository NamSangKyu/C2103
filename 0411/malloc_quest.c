#include <stdio.h>
#include <stdlib.h>
/*
	ó������ �迭�� �����Ҵ����� 10��¥�� �Ҵ� �Ŀ�
	���ڸ� 0�� �Է��ҋ����� ��� �Է�
	�Է��� �޴ٰ� �迭�� ���� �������� �߰������� 3���� �迭�� �ø�
	0�� �Է��� ���� �Է��� ���ڵ��� ������ ����ϴ� �ڵ带 �ۼ�
*/

int main(void) {
	int* arr;
	int size = 10;
	int idx = 0, i, total = 0;
	//�����Ҵ�
	arr = (int*)malloc(sizeof(int) * size);

	while (1) {
		//������ ���ڸ������� ���Ҵ�
		if (idx == size) {
			size += 3;
			arr = (int*)realloc(arr, sizeof(int) * size);
		}
		printf("���� �Է� : ");
		scanf_s("%d", &arr[idx]);
		idx++;
		if (arr[idx-1] == 0) break;
	}
	//����
	for (i = 0; i < idx; i++) {
		total += arr[i];
	}

	printf("���� : %d\n", total);
	
	//����
	free(arr);
	return 0;
}