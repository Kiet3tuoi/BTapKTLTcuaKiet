#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	double nghiem;
	printf("\n Nhap gia tri a= ");
	scanf("%d", &a);
	printf("\n Nhap gia tri b= ");
	scanf("%d", &b);
	{
		printf("\n Phuong trinh sau khi nhap: %dx + %d= 0", a, b);
		if(a==0 && b== 0)
		printf("\n Phuong trinh vo nghiem");
		else if(a==0 && b!=0)
		printf("\n Phuong trinh vo so nghiem");
		else if(a!=0)
		nghiem = (double)-b/a;
		printf("\n phuong trinh tren co nghiem la: x= %0.2f", nghiem);
		return 0;
    }
	
}
