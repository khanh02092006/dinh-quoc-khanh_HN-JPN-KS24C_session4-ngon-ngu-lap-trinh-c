#include<stdio.h>
int main (){
	int ngay,thang ,nam;
	int ngaymax =0;
	printf("nhap ngay");
	scanf("%d",&ngay);
	printf(" nhap thang ");
	scanf("%d",&thang);
	printf(" nhap nam ");
	scanf("%d",&nam);
	if (thang<1||thang>12){
		printf("ngay %d %d  %d khong hop le",ngay,thang,nam);
		return 0;
		}
	 if (thang==1 ||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
	ngaymax=30;
	}	else if (thang==4||thang==6||thang==9||thang==11){
		ngaymax=30;
		} else if (thang==2){
			if((nam%4==0&&nam%100!=0)||(nam%400==0)){
				ngaymax=29;
				}
				else {
					ngaymax = 28;
					}
					}
					if(ngay<1||ngay>ngaymax){
						printf(" ngay %d %d %d kh hop le\n",ngay,thang,nam);
						} else {
							printf("%d %d %d hop le\n",ngay,thang,nam);
}
                return 0;
}		
