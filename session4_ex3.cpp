#include<stdio.h>
int main (){
	int a;
	printf (" nhap gia tri so nguyen ");
	scanf("%d",&a);
	if(a % 3==0 && a%5==0){
		printf (" so ban nhap chia het 3 và cho 5\n ");
	}else if (a%3==0){
		printf (" so nhap chia het cho 3\n");
    } else if(a%5==0){
    	printf(" so nhap chia het cho 5\n");
		}else{
			printf("so ban nhap khong chia het cho 3 haoc 5\n");
			}
		return 0;
		}
		
