//Viet ham kiem tra so chinh phuong

#include <stdio.h>
#include <math.h>
int kiemTraSoChinhPhuong(int a){
	int kq = (int)sqrt(a);
	if(pow(kq,2)==a) return 1;
	else return 0;
}

int main(){
	int a;
	do{
		printf("Nhap so a: ");
		scanf("%d", &a);
	}while(a<=1);
	if(kiemTraSoChinhPhuong(a)==1){
		printf("%d la so chinh phuong!", a);
	}else{
		printf("%d khong phai la so chinh phuong!", a);
	}
	return 0;
}
