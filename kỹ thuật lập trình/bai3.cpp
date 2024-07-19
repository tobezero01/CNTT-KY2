#include<stdio.h>
#include<math.h>
#include<string.h>
int main (){
	int n,i,j,hd[100],td[100];
	printf("moi ban nhap so diem tren mat phang xOy:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
        printf("moi nhap diem (x%d,y%d):",i,i);
		scanf("%d%d",&hd[i],&td[i]);
	}
	printf("day diem ban vua nhap la:\n");
	for(i=1;i<=n;i++){
		printf("(%d,%d)    ",hd[i],td[i]);
	}
	//tinh do dai duong gap khuc
	float S1=0;
	for(i=1;i<n;i++){
		S1+=sqrt((pow((hd[i]-hd[i+1]),2))+pow((td[i]-td[i+1]),2));
	}
	printf("\ndo dai duong gap khuc lan luot di qau cac diem la: %f",S1);
	//tim cac diem xa truc hoanh nhat
	float max=0;
	for(i=1;i<=n;i++){
		if(max<abs(td[i]))
			max= abs(td[i]);
	}
	printf("\ncac diem xa truc hoanh nhat la:");
	for(i=1;i<=n;i++){
		if(abs(td[i])==max) printf("\n(%d,%d)",hd[i],td[i]);
	}
	//cac diem nam trong duong tron A1 ban kinh 10
	int d=0;
	for(i=1;i<=n;i++){
		if(sqrt((pow((hd[i]-hd[1]),2))+pow((td[i]-td[1]),2))<10) d++;
	}
	printf("\nso diem nam trong duong tron tam A1 ban kinh 10 la: %d",d);
	//dem va in cac doan thang cat truc tung
	int d2=0;
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(hd[i]*hd[j]<=0) d2++;	
		}
	}
	printf("\nco %d doan thang cat truc tung la: ",d2);
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(hd[i]*hd[j]<=0) printf("\n(%d,%d)--(%d,%d)",hd[i],td[i],hd[j],td[j]);
		}
	}	
}

