#include <stdio.h>
#include <math.h>
// Bai_5_6: Tim UCLN va BCNN cua 2 so
int UCLN(int n, int m){
	while(n != m){
		if(n > m){
			n = n - m;
		}else{
			m = m - n;
		}
	}
	return n;
}
int BCNN(int n, int m){
	int q = UCLN(n,m);
	return n * m / q;
}
int main(){
	int a, b;
	
	printf("Nhap so thu nhat: "); scanf("%d",&a);
	printf("Nhap so thu hai: "); scanf("%d",&b);
	
	printf("UCLN cua %d va %d: ",a,b);
	printf("%d",UCLN(a,b));
	
	printf("\n");
	
	printf("BCNN cua %d va %d: ",a,b);
	printf("%d",BCNN(a,b));
}

/*
// Bai_3_4: Tinh chu vi tam giac
int TinhCVvaSTTamGiac(int a,int b,int c){
	if(a+b>c&&a+c>b&&c+b>a){
		float p=(a+b+c)/2;
		float s=sqrt(p*(p-a)*(p-b)*(p-c));
		
		printf("Chu vi tam giac: %f",p);
		printf("Dien tich tam giac: %f",s);
	}else{
		printf("Khong phai 3 canh cua tam giac");
	}
}
int main(){
	int a,b,c;
	printf("Nhap canh thu nhat: "); scanf("%d",&a);
	printf("Nhap canh thu hai: "); scanf("%d",&b);
	printf("Nhap canh thu ba: "); scanf("%d",&c);
	
	TinhCVvaSTTamGiac(a,b,c);
}
*/

/*
// Bai 2: Tinh tong cac chu so cua 1 so nguyen n
int TongCacSo(int a){
	int m = 0;
	for( ; a != 0; a /= 10){
		m += a % 10;
	}
	printf("%d",m);
//	return m;
}

int main(){
	int n;
	printf("Nhap 1 so nguyen n: ");
	scanf("%d",&n);
	
	printf("Tong cac chu so cua so nguyen n: ");
	TongCacSo(n);
}
*/
/*
// Bai_1: Tim so ngto tiep theo cua n (tuc la so ngtu > n va gan n nhat)
int KTSoNgTo(int a){
	int count=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			count++;
		}
	}
	if(count==2){
		return true;
	}else{
		return false;
	}
}

void TimSoNgto(int n){
	int i=n+1;
	while(KTSoNgTo(i)==false){
		i++;
	}
	printf("%d",i);
}

int main(){
	int m;
	do{
		printf("Nhap so ngto m: ");
		scanf("%d",&m);
	}while(m<=0);
	
	printf("So ngto > n va gan n nhat: ");
	TimSoNgto(m);
}
*/


