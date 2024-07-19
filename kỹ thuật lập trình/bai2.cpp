#include<stdio.h>
#include<math.h>
#include<string.h>
int main (){
	int i,n,x,a[100];
	printf("nhap so phan tu cua day: ");
	scanf("%d",&n);
	printf("nhap x:");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	//tinh tbc
	int S=0,d1=0;
	for(i=0;i<n;i++){
			S=S+a[i];
			d1=d1+1;
		}
		printf("trung binh cong cua day so la: %d",S/d1);
	//tim max
	int max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]) max=a[i];
	}	
	    printf("\ngia tri lon nhat cau day so la: %d",max);
	//tim so phan tu chan nho hon x
	printf("\ncac phan tu chan nho hon x la:");
	for(i=0;i<n;i++){
		if(a[i]<x && a[i]%2==0) printf("  %d",a[i]);
	}
	//chung minh day don dieu khong giam
	int d2=0;
	for(i=0;i<n;i++){
		if(a[i]<=a[i+1])
		d2++;
	}
	if(d2=n-1) printf("\nday la day don dieu khong giam");
	else printf("\nday khong phai la day don dieu khong giam");
	//xuat day 
	printf("\nday so ban vua nhap la:\n");
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	//dao nguoc day va xuat ra man hinh
	printf("\nday so ban vua nhap dao nguoc la:\n");
	for(i=0;i<n;i++){
		printf("%5d",a[n-i-1]);
	}
	//loc day chan truoc,le sau
	int d3=0,b[100];
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			b[d3]=a[i];
			d3++;
		} 
	}
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			b[d3]=a[i];
			d3++;
		} 
	}
	printf("\nday cua ban sau khi loc la: ");
	for(i=0;i<n;i++){
		printf("%5d",b[i]);
	}	
	}

