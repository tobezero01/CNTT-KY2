#include<stdio.h>
#include<math.h>
#include<string.h>
float Canbac2(float n){
	float T=sqrt(n);
	printf("can bac 2 cua %.0f la: %f",n,T);
}
int main(){
	float n;
	printf("nhap n:");
	scanf("%f",&n);
	Canbac2(n);
}

