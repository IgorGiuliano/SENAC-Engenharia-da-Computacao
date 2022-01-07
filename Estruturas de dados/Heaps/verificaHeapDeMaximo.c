#include <stdio.h>

int isMaxHeap(int* H, int l) {

	int e, d;
	for (int i = 0; i < l; i++) {
		e = 2 * i + 1;
		d = e+1;

		if (e >= l || d >= l){ return 1; }
		if (H[e] > H[i] || H[d] > H[i]){ return 0; }
	}
}


int main() {
	int h[] = { 0, 1, 2, 3, 4 };
	int H[] = { 17, 15, 12, 9, 10, 4, 1, 7, 3, 6 };

	printf("%s\n", isMaxHeap(H, sizeof(H) / sizeof(int)) ? "TRUE" : "FALSE" );

	return 0;
}