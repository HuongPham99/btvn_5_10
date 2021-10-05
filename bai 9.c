//Viet ham tinh S = 1 + 3 + 5 +...+ (2n+1)
#include <stdio.h>
int tinhTong(int n){
	int sum = 0;
	int t = 2*n + 1;
	int i;
	for(i=1; i<=t; i++){
		if(i%2!=0){
			sum += i;
		}
	}
	return sum;
}

int main(){
	int n;
	do{
		printf("Nhap so nguyen n = ");
		scanf("%d", &n);
	}while(n<=0);
	printf("Tong can tim la: %d", tinhTong(n));
	return 0;
}
