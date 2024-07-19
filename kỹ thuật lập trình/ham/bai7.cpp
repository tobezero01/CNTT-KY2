#include<stdio.h>
#include<math.h>
#include<string.h>
void snt(int n){
	int i=2;
	if(n<2){
		printf("%d ko phai la so nguyen to",n);
	}
	int dem=0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem==0) printf("%d la so nguyen to",n);
	if(dem>0) printf("%d ko phai la so nguyen to",n);
}
int main (){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	snt(n);
}
