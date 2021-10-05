//Viet ham tìm max cua 3 so a, b, c

#include <stdio.h>

int timMax2so(int a, int b){
	return(a>b?a:b);
}
int timMax3so(int a, int b, int c){
	int x = timMax2so(a,b);
	int y = timMax2so(x,c);
	return y;
}

int main(){
	int a,b,c;
	printf("Nhap 3 so a, b va c: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("Max la: %d", timMax3so(a,b,c));
	return 0;
}


