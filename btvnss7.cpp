#include <stdio.h>
int main(){
	int year , month;
	printf("nhap thang va nam: ");
	scanf("%d %d",  &month , &year);
	switch(month){
		case 1 :
		case 3 :
	 	case 5 :
	 	case 7 :
	 	case 8 :
	 	case 10 :
	 	case 12 :
			printf("co 31 ngay");
			break;
		case 4 :
		case 6 : 
		case 9 :
		case 11 :
			printf("co 30 ngay");
			break;
		case 2 :
			if(year % 2 ==0){
				printf("co 29 ngay la nhuan");
			}else{
				printf("co 28 ngay la ko nhuan");
			}
			break;
		default:
			printf("khong hop le");
	}
}
