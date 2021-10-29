#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	
	printf("Nhap canh thu nhat: ");
	scanf("%d",&a);
	
	printf("Nhap canh thu hai: ");
	scanf("%d",&b);
	
	printf("Nhap canh thu ba: ");
	scanf("%d",&c);
	
	while(a+b>c&&a+c>b&&c+b>a){
		float P,S;
		P = (a + b + c) / 2;
		S = sqrt ( P * (P - a) * (P - b) * (P - c));
		
		printf("Chu vi tam giac: %f\n",P);
		printf("Dien tich tam giac: %f",S);
		break;
	}
	printf("a,b,c khong phai la canh cua tam giac");
}
