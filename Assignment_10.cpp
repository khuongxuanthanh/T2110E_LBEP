#include <stdio.h>
#include <string.h>
int main(){
	char arr[50];
	printf("Nhap chuoi ky tu: "); scanf("%s",&arr);
	char sort;
	for(int i=0;i<strlen(arr)-1;i++){
		for(int j=i+1;j<strlen(arr);j++){
			if(arr[i]>arr[j]){
				sort=arr[i];
				arr[i]=arr[j];
				arr[j]=sort;
			}
		}
	}
	printf("Chuoi sau khi sap xep '%s' \n",arr);
}
/*
// 1. Nhap vao 1 chuoi, dem xem trong chuoi co cac nguyen am ( a,e,u,o,i..) co so luong bao nhieu, va ky tu khac so luong bao nhieu.
int main(){
	char arr[50];
	printf("Nhap chuoi ky tu: "); scanf("%s",&arr);
	
	int count_vowels=0;// dem nguyen am
	int count_consonants=0;// dem phu am
	
	for(int i=0;arr[i++]!='\0';){
		if(arr[i]=='a'||arr[i]=='e'||arr[i]=='u'||arr[i]=='o'||arr[i]=='i'){
			count_vowels++;
		}else{
			count_consonants++;
		}
	}
	printf("Chuoi '%s' co chua %d nguyen am va %d phu am.",arr,count_vowels,count_consonants);
	return 0;
}
*/

