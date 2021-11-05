#include <stdio.h>
int main(){
	
/*	
// Bai_1: tinh trung binh cong cac so le trong mang n so.
	
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int ary[n];
	int i, count, sum;
	for(;n<=0;){
		printf("Nhap n phai > 0\n");
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	for(i=0; i<n; i++){
		printf("Nhap ptu thu: ");
		scanf("%d",&ary[i]);
	}
	float tb = 0;
	count = 0;
	sum = 0;
	for(i = 0; i < n; i++){
		if(ary[i]%2==1){
			sum+=ary[i];
			count++;
		}
	}
	tb=float(sum)/count;
	printf("Tong so le: %d\n",sum);
	printf("Trung binh cac so le: %f",tb);
*/

// Bai_2: tinh trung binh cong cac so le o vi tri chan trong mang n so.

/*
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int ary[n];
	int i, count, sum;
	for(;n<=0;){
		printf("Nhap n phai > 0\n");
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	for(i=0; i<n; i++){
		printf("Nhap ptu thu: ");
		scanf("%d",&ary[i]);
	}
	float tb = 0;
	count = 0;
	sum = 0;
	for(i = 0; i < n; i++){
		if(ary[i]%2 == 1 && i%2 == 1){
			sum += ary[i];
			count++;
		}
	}
	if(count==0){
		printf("Khong co so le vi tri chan nao ca");
	}else{
		tb=float(sum)/count;
		printf("Tong so le: %d\n",sum);
		printf("Trung binh cac so le: %f",tb);
	}
	
*/

// Bai_3: nhap 1 mang n so nguyen, sau do nhap x. Tim xem x co trong mang hay ko?

/*
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
	
	int flag=0;
	for(i=1;i<n;i++){
		if(ary[i]==x){
			flag=1;
			printf("x vi tri thu: %d",i);
			break;
		}
	}
	if(flag==0){
		printf("%d khong co trong mang",x);
	}
*/	
	
// Bai_4: Nhap mang n so nguyen, tim so le cuoi cung cua mang?	
	
/*	
	int n;
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
		printf("Nhap ptu thu: ");
		scanf("%d",&ary[i]);
	}
	for(i=n-1;i<n;i--){
		if(ary[i]%2==1){
			printf("So le cuoi cung: %d\n",ary[i]);
			break;
		}else{
			printf("Khong co so le trong mang");
		}
	}
*/

// Bai_5: Nhap mang n so nguyen, tim so duong nho nhat trong mang?
/*
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int ary[n];
	int i,min;
	for(;n<=0;){
		printf("Nhap n phai > 0\n");
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	for(i=0; i<n; i++){
		printf("Nhap ptu thu: ");
		scanf("%d",&ary[i]);
	}
	int m=0;
	for(i=0;i<n;i++){
		if(ary[i]>0){
			m=ary[i];
			break;
		}
	}
	if(m==0){
		printf("Mang khong co so duong");
	}else{
		for(int i=0;i<n;i++){
			if(ary[i]>0&&ary[i]<m){
				m=ary[i];
			}
		}
		printf("So duong nho nhat: %d",m);
	}
*/
// Bai_6: Nhap mang n so nguyen, tim so luong cac so duong lien tiep nhieu nhat?
/*
	int n;
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
		printf("Nhap ptu thu: ");
		scanf("%d",&ary[i]);
	}
	int count = 0, max = 0;
	for(int i = 0; i < n; i++){
		if(ary[i] > 0){
			count++;
			if(count > max){
				max = count;
			}
		}else{
			count = 0;
		}
	}
	printf("So luong so duong nhieu nhat: %d",max);
*/

// Bai_7: Nhap mang n so nguyen, tim xem chuoi so duong co tong lon nhat?
/*
	int n;
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
		printf("Nhap ptu thu: ");
		scanf("%d",&ary[i]);
	}
	int max = 0, total=0;
	for(int i = 0; i < n; i++){
		if(ary[i] > 0){
			total+=ary[i];
			if(total > max){
				max = total;
				
			}
		}else{
			total = 0;
		}
	}
	printf("Tong so duong lien tiep lon nhat: %d",max);
*/

}
