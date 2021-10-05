//Giai phuong trinh bac 2
#include <stdio.h>
#include <math.h>

void giaiPhuongTrinhBacNhat(float a, float b){
	if(a==0){
		if(b==0){
			printf("Phuong trinh da cho co vo so nghiem!");
		}else{
			printf("Phuong trinh da cho vo nghiem!");
		}
	}else{
		printf("Phuong trinh da cho co 1 nghiem duy nhat: %.2f", -b/a);
	}
}
void giaiPhuongTrinhBacHai(float a, float b, float c){
	float delta = b*b - 4*a*c;
	float x1, x2;
	if(a==0){
		giaiPhuongTrinhBacNhat(b,c);
	}else{
		if(delta<0){
			printf("Phuong trinh da cho vo nghiem!");
		}else if(delta==0){
			printf("Phuong trinh da cho co nghiem kep: %.2f", -b/(2*a));
		} else{
			x1 = (float)((-b + sqrt(delta))/(2*a));
			x2 = (float)((-b - sqrt(delta))/(2*a));
			printf("Phuong trinh da cho co 2 nghiem phan biet la x1 = %.2f va x2 = %.2f", x1, x2);
		}
	}
}

int main(){
	float a, b, c;
	printf("Nhap vao he so phuong trinh a , b va c la: ");
	scanf("%f%f%f", &a, &b, &c);
	giaiPhuongTrinhBacHai(a,b,c);
}
