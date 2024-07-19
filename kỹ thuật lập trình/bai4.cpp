#include<stdio.h>
#include<math.h>
#include<string.h>
int main (){
	int n,i,j;
	int a[100][100];
	printf("nhap cap cua ma tran: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]=  ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("ma tran cua ban la:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
		}
	//tong cac phan tu tren duong cheo phu ma tran
	int S=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i+j==n-1){
				S+=a[i][j];
			}
		}
	}
	printf("tong cac phan tu phia tren duong cheo phu la: %d",S);
	//tim gia tri lon nhat cua ma tran
	int max=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(max<a[i][j]) max=a[i][j];
		}
	}
	printf("\ngia tri lon nhat ma tran la: %d",max);
	//tinh tich tung cot cua ma tran va cho biet cot nao nho nhat
	int d=0,T[100];
	for(j=0;j<n;j++){
		T[j]=1;
		for(i=0;i<n;i++){
			T[j]*=a[i][j];
		}
		d++;
		printf("\ntich cot thu %d la: %d",d-1,T[j]);
	}
	int min=T[0];
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(min>T[j]) min=T[j];
		}
	}
	printf("\ncac cot co tich nho nhat la: ");
	for(i=0;i<n;i++){
			if(min==T[i]){
				printf("cot %d    ",i);
			} 
		}
	//kiem tra ma tran co phai la ma tran tam giac khong
	int dem1=0, dem2=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(i<j && a[i][j]==0) dem1++;	
		if(j<i && a[i][j]==0) dem2++;
		}	
		}
		if(dem1==(n*(n-1))/2) printf("\nday la ma tran tam giac duoi");
		else if(dem2==(n*(n-1))/2) printf("\nday la ma tran tam giac tren");
		else printf("\nday khong phai la ma tran tam giac");
	//kiem tra ma tran co phai ma phuong khong
	int kt=1;	
		int hang[n] = {}, cot[n] = {}, chinh=0, phu=0;
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
				    hang[i] += a[i][j];
				    cot[j] += a[i][j];
				    if(i==j) chinh += a[i][j];
				    if(i+j==n-1) phu += a[i][j]; 
			}
			}
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
				if(hang[i]!=cot[j] || hang[i]!=chinh || hang[i]!=phu || cot[j]!=chinh || cot[j]!=phu || chinh!=phu)	kt=0;
				}
			}
		if(kt==1) printf("\nma tran nay la ma phuong");
		else printf("\nma tran nay khong phhai la ma phuong");	
			
}

