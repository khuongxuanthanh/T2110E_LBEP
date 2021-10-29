#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	int sum;
	
	printf("Nhap so n: ");
	scanf("%d",&n);
	i = 0;
	sum = 0;
	
	while (i <= n){
		sum += i*2 + 1;
		i++;
	}
	printf("Tong phan so: %d",sum);
}
