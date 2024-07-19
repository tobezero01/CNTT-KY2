#include <bits/stdc++.h>
#include <conio.h>
typedef struct{
	char ten[50];
	char nxb[50];
	float gia;
}book;

void nhap(FILE *f, int n, book *sach)
{	int i;
	for (i=0;i<n;i++){
		fscanf(f,"\n%[^\n]",&sach[i].ten);
		fscanf(f,"\n%[^\n]",&sach[i].nxb);
		fscanf(f,"%f\n",&sach[i].gia);
	}
}
void xuat(book *sach, int n)
{
	for (int i=0;i<n;i++)
	{	
		printf("\nSach thu %d:\n",i+1);
		printf("Ten: %s\n",sach[i].ten);
		printf("NXB: %s\n",sach[i].nxb);
		printf("Gia: %.1f\n",sach[i].gia);
	}		
}
int dem(book *sach, int n)
{
	char ten_nxb[50];
	int count=0;
	printf("\nMoi nhap ten nxb: ");
	gets(ten_nxb);
	for (int i=0;i<n;i++){
		if (strcmp(sach[i].nxb,ten_nxb)==0)
			count++;
	}
	if (count ==0 ) printf("Khong co sach cua nxb nay!");
	else 
		printf("So sach cua nxb %s : %d",ten_nxb,count);
	return count;
}
void swap(book *s1, book *s2){
	book c;
	c=*s1;
	*s1=*s2;
	*s2=c;
}
void swap_chuoi(char *a, char *b)
{	int n=(strlen(a) > strlen(b))?strlen(a):strlen(b);
	char c[n+1];
	strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
}
void sapxepgiam(book *sach, int n)
{
	int i,j,k;
	for (i=0;i<n;i++){
		k=i;
		for (j=i+1;j<n;j++){
			if (sach[j].gia > sach[k].gia ){
				k=j;	
			}
		}
		swap(&sach[k],&sach[i]);
	}
	for (int i=0;i<n;i++)
	{	printf("\n");
		printf("%s | ",sach[i].ten);
		printf("%s | ",sach[i].nxb);
		printf("%.1f\n",sach[i].gia);
	}	
}
void xuat_tep(FILE *f, int n, book *sach, int m){
	f=fopen("output22.txt","w");
	fprintf(f,"%d\n",m);
	for (int i=0;i<n;i++){
		fprintf(f,"%s | %s | %.1f\n",sach[i].ten,sach[i].nxb,sach[i].gia);
	}
	fclose(f);
}
int main()
{
	FILE *f;
	if((f=fopen("input22.txt","r"))==NULL)
	{
		printf("Error!");
		getch();
		exit(1);
	}
	book *sach;
	int n;
	fscanf(f,"%d",&n);
	printf("%d",n);
	sach=(book*)calloc(n,sizeof(book));
	nhap(f,n,sach);
//	xuat(sach,n);
//  a, Dem xem co bao nhieu cuon sach cua nxb 
	int m=dem(sach,n);
//  b, Sap xep sach theo gia giam dan
	sapxepgiam(sach,n);
//  c, Luu ket qua vao tep output.txt
	xuat_tep(f,n,sach,m);
	fclose(f);
}
