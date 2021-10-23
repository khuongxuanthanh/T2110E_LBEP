#include <stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen to = ");
	scanf("%d",&a);
	
	int b;
	b = 0;
	b = b*10 + a%10;
	a = a/10;
	
	if(a != 0){
		b = b*10 + a%10;
		a = a/10;
		
		if(a != 0){
			b = b*10 + a%10;
			a = a/10;
			
			if(a != 0){
				b = b*10 + a%10;
				a = a/10;
				
				if(a != 0){
					b = b*10 + a%10;
					a = a/10;
					
				}else{
					printf("So dao nghich: %d",b);
				}
			}else{
				printf("So dao nghich: %d",b);
			}
		}else{
			printf("So dao nghich: %d",b);
		}
	}else{
		printf("So dao nghich: %d",b);
	}
}
