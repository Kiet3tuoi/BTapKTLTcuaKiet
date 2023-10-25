#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	printf("\n Nhap do dai canh a: ");
	scanf("%d", &a);
	printf("\n Nhap do dai canh b: ");
	scanf("%d", &b);
	printf("\n Nhap do dai canh c: ");
	scanf("%d", &c);
	if(a<b+c && b<a+c && c<a+b)
	{	
		if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
		printf("\n Day la tam giac vuong",a,b,c);
		if(a==b && a==c)
        printf("\n Day la tam giac deu",a,b,c);
		if(a==b || b==c || a==c)
		printf("\n Day la tam giac can",a,b,c);
		else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
		printf("\n Day la tam giac tu",a,b,c);
		else
		printf("\n Day la tam giac nhon");	
    }
	    else
        printf("\n ba canh a,b,c khong phai la ba canh cua mot tam giac");
        {
        	float p,s,h;
        	p=(a+b+c)/2;
        	printf("\n Chu Vi cua tam giac la:%0.2f", p);
        	s=sqrt(p*(p-a)*(p-b)*(p-c));
        	printf("\n Dien tich cua tam giac la:%0.2f", s);
        	h=2*s/a;
        	printf("\n Duong cao a:%0.2f",h);
        	h=2*s/b;
        	printf("\n Duong cao b:%0.2f",h);
        	h=2*s/c;
        	printf("\n Duong cao c:%0.2f",h);
        	
        }
        return 0;
}
