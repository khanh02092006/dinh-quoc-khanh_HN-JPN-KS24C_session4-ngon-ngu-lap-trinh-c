#include<stdio.h>
int main(){
	int thang;
	printf("nhap thang phai tu 1-12 nha");
	scanf("%d",&thang);
	switch(thang){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		printf("thang nay co 31 ngay ");
		break;
		case 2:
			printf("thang nay la có 28 ngay hoac 29 ngay ");
			break;
		case 4:case 6:case 9: case 11:
			printf ("thang nay co 30 ngay ");
			break;
		default :
			printf (" so thang kh có");
			}
			return 0;
			}
