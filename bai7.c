//Viet ham in cac so nguyen to tu 1 den n

#include <stdio.h>

int kiemTraSNT(int n){
	int i;
	if(n<=1) return 0;
	for(i=2; i<=n-1; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	int i;
	printf("Nhap so n = ");
	scanf("%d", &n);
	printf("Cac so nguyen to tu 2 den n la: ");
	for(i=0; i<=n; i++){
		if(kiemTraSNT(i)){
			printf("%d ", i);
		}
	}
}
