#include <stdio.h>
int main(){
	int moth,day,s,i;
	
	printf("Nhap thang: ");
	scanf("%d",&moth);
	
	printf("Nhap ngay: ");
	scanf("%d",&day);

	s == day;
	if(moth > 0 && moth < 13){
		
		for(i = 1; i < moth; i++){
			switch(i){
				case 2:
					s += 28;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					s += 30;
					break;
				default:
					s += 31;
			}
		}
		int y = s + day;	
		int thu = y%7;
		
		printf("Tong so ngay %d\n",y);
			
		switch(thu){
			case 1:printf("Ngay thu hai\n"); break;
			case 2:printf("Ngay thu ba\n"); break;	
			case 3:printf("Ngay thu tu\n"); break;
			case 4:printf("Ngay thu nam\n"); break;	
			case 5:printf("Ngay thu sau\n"); break;
			case 6:printf("Ngay thu bay\n"); break;
			default:printf("Ngay CN\n"); break;
		}
	}else{
		printf("Khong qua 12 thang, vui long nhap lai");
	}
}
