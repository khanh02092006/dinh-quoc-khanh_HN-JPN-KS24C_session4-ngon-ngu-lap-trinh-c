#include<stdio.h>
int main(){
	int socu,somoi,sokwh,tiendien;
	printf (" nhap so cong to dien thang dau");
	scanf("%d",&socu);
	printf(" nhap so cong to dien thang cuoi");
	scanf("%d",&somoi);
	sokwh=somoi-socu;
	if(sokwh<0){
		printf("sai roi");
		}
		if(sokwh>0 && sokwh<50){
			tiendien =sokwh * 10000;
			printf("so tien dien là :%d",tiendien);
			} else if (sokwh>=50 && sokwh<100){
				tiendien=50*10000 +(sokwh-50)*15000;
				printf("so tien dien là %d",tiendien);
				} else if (sokwh>=100 && sokwh <150){
					tiendien = 50 *10000 +50*15000 +(sokwh -100)*20000;
					printf("so tien dien là :%d",tiendien);
					} else if (sokwh>=150 && sokwh <200){
					tiendien = 50 *10000 +50*15000 +50 *20000 +(sokwh - 150)*25000;
					printf("so tien dien là :%d",tiendien);
					}else if (sokwh>=200){
						tiendien = 50 *10000+ 50*15000+50*20000+50*25000 +(sokwh-200)*30000;
						printf(" so tien dien là : %d",tiendien);
						}
						return 0;
						}
			
