#include<stdio.h>
#include<math.h>
#include<string.h>
void daydiem(float a, float b, float c,float d){
	float S=0;
	S=S+sqrt((pow((a-c),2))+pow((b-d),2));
	printf("\ndo dai duong gap khuc di qua 2 diem la: %f",S);
}
int main (){
	float a,b,c,d;
	printf(" nhap diem thu nhat (a,b):");
	scanf("%f%f",&a,&b);
	printf(" nhap diem thu hai (c,d):");
	scanf("%f%f",&c,&d);
	daydiem(a,b,c,d);
}

