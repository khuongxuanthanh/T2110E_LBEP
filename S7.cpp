#include <stdio.h>
int main(){
	
/*
// Bai_1: Nhap mang n so nguyen va 1 so x. Tim so trong mang co gia tri nho hon va gan x nhat?

	int n,x; // n la kich thuoc mang( array size)
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int ary[n];
	int i;
	for(;n<=0;){
		printf("Nhap n phai > 0\n");
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	for(i=0; i<n; i++){
		printf("Nhap ptu thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	printf("Nhap x: ");
	scanf("%d",&x);
	
	int flag = 0, min=0;
	for(i = 0; i < n; i++){
		if(ary[i] < x){
			flag = 1;
			min = ary[i];
			break;
		}
	}
	if(min == 0){
		printf("khong tim thay so tiem can");
	}else if(min != 0){
		for(int i = 0; i < n; i++){
			if(ary[i] == x){
				break;
			}else if(ary[i] < x && ary[i]>min){
				min = ary[i];
			}
		}
		printf("So tiem can la: %d",min);
	}
*/


/*
// Bai_2: Nhap mang n so nguyen, moi lan nhap phai kiem tra xem so do da co trong mang chua, neu chua co thi moi cho vao mang.

	int n,x,i; // n la kich thuoc mang( array size)
	printf("Nhap mang n ptu: ");
	scanf("%d",&n);
	
	int ary[n];
	for(;n<=0;){
		printf("Nhap n phai > 0\n");
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	for(int i = 0; i  <n; i++){
		printf("Nhap ptu thu %d: ",i);
		scanf("%d",&ary[i]);
	}

	printf("Nhap x: ");
	scanf("%d",&x);
		
	for(i = 0; i < n; i++){ // Kiem tra ptu khi nhap vao, ptu da co trong mang yeu cau nhap lai
		if(ary[i] == x){
			printf("Ptu x da co trong mang, nhap lai: ");
			scanf("%d",&x);
		}
	}
	for(i = 0; i < n; i++){ // Them ptu x vao cuoi mang
		ary[n] = x;
	}
	n=n+1;
	
	for(i = 0; i < n; i++){
		printf("Mang moi: %d\n",ary[i]);
	}	
*/	


// Bai_3: Nhap mang n so nguyen to khac nhau ( tuc la mang toan so nguyen to va khong co so nao trung nhau)
	int n,x,i; // n la kich thuoc mang( array size)
	printf("Nhap mang n ptu: ");
	scanf("%d",&n);
	
	int ary[n];
	for(;n<=0;){
		printf("Nhap n phai > 0\n");
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	int count=0;
	for(int i = 0; i  <n; i++){
		printf("Nhap ptu thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	for(i=0;i<n;i++){
		for(int j = 1; j <= ary[i]; j++){
			if(ary[i] % j == 0){
				count++;
			}
		}
	}
	if(count == 2){
		for(i = 0; i < n; i++){
			printf("Ptu nhap vao mang la so ngto: %d\n",ary[i]);
		}
	}else{
		for(int i = 0; i < n; i++){
			printf("Nhap ptu trong mang phai la so ngto: ");
			scanf("%d",&ary[i]);
		}
	}
}
