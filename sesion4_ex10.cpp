#include<stdio.h>
int main (){
	int a,b,c;
	printf("nhap so nguyen thu 1");
	scanf("%d",&a);
	printf("nhap so nguyen thu 2 ");
	scanf("%d",&b);
	printf("nhap so nguyen thu 3");
	scanf("%d",&c);
	if (a>b){
		int d=a;
		a=b;
		b=d;
		}
		if(a>c){
			int d=a;
			a=c;
			c=d;
			}
			if (b>c){
				int d=b;
				b=c;
				d=c;
				}
				printf(" cac so tu be den lon là %d %d %d",a,b,c);
				return 0;
				}
	
