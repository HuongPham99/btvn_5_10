//Viet ham tinh S = 1*1 + 2*2 + ... n*n

#include <stdio.h>
long tinhTong(int n){
	long sum = 0;
	int i;
	for(i=1; i<=n; i++){
		sum += i*i;
	}
	return sum;
}

int main(){
	int n;
	do{
		printf("Nhap so nguyen n = ");
		scanf("%d", &n);
	}while (n<=0);
	printf("Tong can tim la: %d", tinhTong(n));
	return 0;
}
