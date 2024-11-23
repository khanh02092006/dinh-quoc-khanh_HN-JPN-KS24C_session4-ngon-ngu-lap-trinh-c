#include<stdio.h>
int main(){
	int nam;
	printf(" nhap nam vao");
	scanf("%d",&nam);
	if((nam%4==0&&nam%100==0)||(nam%400==0)){
		printf("nam nhuan\n",nam);
		}else {
			printf (" khong phai nam nhuan\n",nam);
			}
			return 0;
			}
