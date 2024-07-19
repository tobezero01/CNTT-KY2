#include<stdio.h>
#include<math.h>
#include<string.h>
void check1(int n){
	int i,S=0;
	for(i=1;i<n;i++){
		if(n%i==0) S+=i;
	}
	if(S==n) printf("day la so hoan hao");
	else printf("day khong phai so hoan hao");
}
void check2(int n){
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
	if(dem==0) printf("\n%d la so nguyen to",n);
	if(dem>0) printf("\n%d ko phai la so nguyen to",n);
}
int main (){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	check1(n);
	check2(n);
}
