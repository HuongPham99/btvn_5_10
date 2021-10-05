//Viet ham tim uoc so chung lon nhat va boi so chung nho nhat cua 2 so nguyen

#include <stdio.h>

int timUSCLN(int a, int b){
	int USCLN;
	if(a==0 || b==0){
		USCLN = a+b;
	}else{
		while(a!=b){
			if(a>b) a = a - b;
			else b = b - a;
		}
	}
	return a;
}

int timBSCNN(int a, int b){
	int t = a*b;
	int BSCNN;
	int USCLN = timUSCLN(a,b);
	if(a==0 || b==0){
		BSCNN = (a*b)/USCLN;
	}else{
		while(a!=b){
			if(a>b) a = a - b;
			else b = b - a;
		}
	}
	return BSCNN = t/a;
}

int main(){
	int a,b;
	printf("Nhap 2 so a va b: ");
	scanf("%d%d", &a, &b);
	printf("USCLN cua a va b la: %d", timUSCLN(a,b));
	printf("\nBSCNN cua a va b la: %d", timBSCNN(a,b));
	return 0;
}
