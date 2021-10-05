
//Viet ham tinh tong binh phuong cac so le tu 1 den n

#include <stdio.h>
#include <math.h>

long tinhTongBinhPhuong(int n) {
	int i;
	long sum = 0;
	for (i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			sum += i*i;
		}
	}
	return sum;
}

int main() {
	int n;
	do {
		printf("Nhap vao n = ");
		scanf("%d", &n);
	} while (n <= 0);
	long kq = tinhTongBinhPhuong(n);
	printf("Tong binh phuong cac so le la: %d\r\n", kq);
	return 0;
}
