#include<stdio.h>
#include<math.h>
#include<string.h>
float sosanh(float a, float b, float c){
	if(a>b && a>c) return a;
	else if(b>a && b>c ) return b;
	return c;
}
int main (){
	float a,b,c;
	printf("moi nhap a:");
	scanf("%f",&a);
	printf("moi nhap b:");
	scanf("%f",&b);
	printf("moi nhap c:");
	scanf("%f",&c);
	if(sosanh(a,b,c)==a) printf("so lon nhat la: %.2f",a);
	else if(sosanh(a,b,c)==b) printf("so lon nhat la: %.2f",b);
	else printf("so lon nhat la: %.2f",c);
}
