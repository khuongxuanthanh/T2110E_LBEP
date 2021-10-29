#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	float sum;
	
	printf("Nhap so n: ");
	scanf("%d",&n);
	i = 1;
	sum = 0;
	
	while (i <= n){
		sum += 1/(float)i;
		i++;
	}
	printf("Tong phan so: %f",sum);
}
