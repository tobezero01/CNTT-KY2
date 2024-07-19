#include<stdio.h>
#include<math.h>
#include<string.h>
float canhtg(float x1, float y1, float x2,float y2){
    return sqrt((pow((x1-x2),2))+pow((y1-y2),2));
}
float dientich(float a, float b, float c){
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main (){
    float x1,y1,x2,y2,x3,y3;
    float a,b,c;
    printf(" nhap diem thu nhat (x1,y1):");
    scanf("%f%f",&x1,&y1);
    printf(" nhap diem thu hai (x2,y2):");
    scanf("%f%f",&x2,&y2);
    printf(" nhap diem thu ba (x3,y3):");
    scanf("%f%f",&x3,&y3);
    a=canhtg(x1,y1,x2,y2);
    b=canhtg(x2,y2,x3,y3);
    c=canhtg(x3,y3,x1,y1);
    printf("\ndo dai canh thu nhat tam giac la: %f",a);
    printf("\ndo dai canh thu hai tam giac la: %f",b);
    printf("\ndo dai canh thu ba tam giac la: %f",c);
    if (a >= b + c || b >= a + c ||  c >= a + b)
        printf("\nday khong phai la tam giac");
    else
        printf("\ndien tich tam giac tu 3 toa do da nhap la: %f",dientich(a,b,c));
}