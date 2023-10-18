#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("\n nhap gia tri cua a: ");
    scanf("%d", &a);
    printf("\n nhap gia tri cua b: ");
    scanf("%d", &b);
    if (a>b)
    printf("\n gia tri lon nhat la: %d", a);
    else if (b>a)
    printf("\n gia tri lon nhat la: %d", b);
    {
    	if (a<b)
    	printf("\n gia tri nho nhat la: %d", a);
    	else if (b<a)
    	printf("\n gia tri nho nhat la: %d", b);
		return 0;	
    }
}
    	
