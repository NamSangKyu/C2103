#include <stdio.h>
int abs(int n) {
	return n < 0 ? -n : n;
}
void abs_ref(int* p) {
	if (*p < 0)
		*p = -*p;
}
int main(void) {
	int n = -10;
	n = abs(n);//Call By Value 일때
	printf("n : %d\n", n);

	int p = -10;
	abs_ref(&p);//Call By Reference 일때
	printf("p : %d\n", p);
	return 0;
}