//Viet ham kiem tra mot so co la so hoan hao khong
#include <stdio.h>

int timSoHoanHao(int a){
	int i;
	int sum = 0;
	for(i=1; i<a; i++){
		if(a%i==0){
			sum += i;
		}
	}
	return (sum==a?1:0);
}

int main(){
	int a;
	printf("Nhap vao do a: ");
	scanf("%d", &a);
	if(timSoHoanHao(a)==1){
		printf("%d la so hoan hao!", a);
	}else{
		printf("%d khong phai la so hoan hao!", a);
	}
	return 0;
}
