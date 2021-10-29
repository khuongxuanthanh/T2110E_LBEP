#include <stdio.h>
int main(){
	int n,fi1,fi2,fin;
	
	printf("Nhap 1 so nguyen duong n: ");
	scanf("%d",&n);
	
	int count = 3;//day Fibonace bat dau la 0 hay 1
	
	if(n == 1){
		fi1 = 0;
		printf(" So thu n trong day Fibonace la: %d",fi1);
	}else if(n == 2){
		fi2 = 1;
		printf(" So thu n trong day Fibonace la: %d",fi2);
	}else if(n>2){
		while(count <= n){
			fin = fi1+fi2;
			fi1=fi2;
			fi2=fin;
			count++;
		}
		printf(" So thu n trong day Fibonace la: %d",fin);
		
	}
	
}
