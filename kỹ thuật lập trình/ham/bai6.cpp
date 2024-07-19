#include<stdio.h>
#include<math.h>
#include<string.h>
void ptbac2(float a, float b,float c){
	float delta=pow(b,2)-4*a*c;
	if(delta<0){
		printf("phuong trinh vo nghiem");
	}
	else if(delta==0){
		printf("phuong trinh co 2 nghiem kep x1=x2=%f",(-b)/(2*a));
	}
	else if(delta>0){
		printf("phuong trinh co 2 nghiem phan biet:\nx1=%f\nx2=%f",(-b+sqrt(delta))/2*a,(-b-sqrt(delta))/2*a);
	}
}
int main (){
	float a,b,c;
	printf("nhap a,b,c:\n");
	scanf("%f%f%f",&a,&b,&c);
	ptbac2(a,b,c);
}
