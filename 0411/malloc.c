#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//�����Ҵ� --> heap �޸� ������ ���
	int size;
	int* arr;
	int i;
	printf("�Ҵ��� �迭 ������ �Է� : ");
	scanf_s("%d", &size);

	arr = (int *)malloc(sizeof(int)*size);//���� �޸� �Ҵ�
	for (i = 0; i < size; i++) {
		arr[i] = i+1;
	}
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	//���Ҵ�
	 //�ǵڿ��� ���� �����ϰų� �߰��� �����Ҵ���
	arr = (int*)realloc(arr, sizeof(int) * 5);
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);//�����Ҵ��� �޸� ����
	
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}