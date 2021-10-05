//Viet ham kiem tra so chan hay le

#include <stdio.h>
int kiemTra(int n){
	return ((n%2==0)?1:0);
}

int main(){
	int n;
	do{
		printf("Nhap vao so n: ");
		scanf("%d", &n);
	}while(n<=0);
	if(kiemTra(n)==1){
		printf("%d la so chan!", n);
	}else{
		printf("%d la so le!", n);
	}
	return 0;
}
