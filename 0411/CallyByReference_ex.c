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
	n = abs(n);//Call By Value �϶�
	printf("n : %d\n", n);

	int p = -10;
	abs_ref(&p);//Call By Reference �϶�
	printf("p : %d\n", p);
	return 0;
}