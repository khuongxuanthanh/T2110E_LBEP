#include <stdio.h>
int main(){

// Nhap gia tri cho mang n so nguyen, dam bao la moi lan nhap moi 1 so thi sap xep
// luon mang de khi xong phan tu cuoi cung se duoc luon mang co gia tri be -> lon.

	int n,x,i; // n la kich thuoc mang( array size)
	printf("Nhap mang n ptu: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("Nhap ptu thu %d :",i);
		scanf("%d",&arr[i]);
		for(int j = 0; j < i; j++){
			for(int m = 0; m < i - j;m++){
				if(arr[m] > arr[m + 1]){
					// thuat toan swap
					int temp = arr[m];
					arr[m] = arr[m + 1];
					arr[m + 1]= temp;
				}
			}
		}
		printf("Mang sap xep tang dan: \n");
		for(int j=0;j<=i;j++){
			printf("%d\n",arr[j]);
		}
	}
}
