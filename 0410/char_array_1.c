#include <stdio.h>
int main(void) {
	char str[] = "Hello World";//11����
	int arr[] = { 1,2,3,4 };

	printf("%d %d\n", sizeof(str), sizeof(arr));
	//     �ּҰ�, ���ڿ�
	printf("%d %s\n", str, str);
	printf("�ι��� �ڵ� �� ��� : %d %s\n", str[11], str[11]);
	
	str[5] = 0;//�����ڵ� 0�� �ι���
	printf("%s\n", str);//���ڿ� ��½� �ι��� ���������� ���
	return 0;
}